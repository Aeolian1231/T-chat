#include "registdialog.h"
#include "ui_registdialog.h"
#include "global.h"
#include "httpmgr.h"//不是系统库尽量在cpp文件包含

regist::regist(QWidget *parent): QDialog(parent), ui(new Ui::regist){
    ui->setupUi(this);
    connect(ui->cancel_Button, &QPushButton::clicked, this, &regist::switchLogin);

    ui->pass_Edit->setEchoMode(QLineEdit::Password);
    ui->confirm_Edit->setEchoMode(QLineEdit::Password);
    ui->email_err_tip->setProperty("state", "nomal");
    repolish(ui->email_err_tip);
    connect(httpMgr::GetInstance().get(), &httpMgr::sig_reg_mod_finish, this, &regist::slot_reg_mod_finish);

    initHttpHandlers();
}

regist::~regist(){
    delete ui;
}

void regist::on_getcode_Button_clicked(){
    auto email = ui->email_Edit->text();
    QRegularExpression regex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    bool match = regex.match(email).hasMatch();
    QLabel *la = findChild<QLabel*>("email_err_tip");
    if(match){
        showTip("正在发送验证码...", la, true);
        //发送验证码
    }
    else{
        showTip("邮箱格式不正确",la, false);
    }
}

void regist::on_confirm_Button_clicked(){
    auto passwd = ui->pass_Edit->text();
    auto con_passwd = ui->confirm_Edit->text();
    QLabel *la = findChild<QLabel*>("pass_err_tip");
    // 异步循环检查两次密码输入是否一致
    if(passwd != con_passwd){
        showTip("两次密码输入不一致", la, false);
    }
    else{
        showTip("√", la, true);
    }
}

void regist::slot_reg_mod_finish(ReqId id, QString res, ErrorCodes err)
{
    if(err != ErrorCodes::SUCCESS){
        QLabel *la = findChild<QLabel*>("req_err_tip");
        showTip("网络请求错误", la, false);
        return;
    }

    //解析JSON字符串，res转化为QByteArray
    QJsonDocument jsonDoc = QJsonDocument::fromJson(res.toUtf8());
    if(jsonDoc.isNull()){
        //json解析失败
        QLabel *la = findChild<QLabel*>("req_err_tip");
        showTip("json解析失败", la, false);
        //添加日志
        return;
    }
    if(!jsonDoc.isObject()){
        //json解析错误
        QLabel *la = findChild<QLabel*>("req_err_tip");
        showTip("json解析失败", la, false);
        //添加日志
        return;
    }

    //解析成功
    _handler[id](jsonDoc.object());
    return;
}

void regist::showTip(QString str, QLabel *label, bool ok){
    if(ok){
        label->setProperty("state", "normal");
    }
    else{
        label->setProperty("state", "err");
    }
    label->setText(str);
    repolish(label);
}

void regist::initHttpHandlers()
{
    //获取注册验证码回包
    _handler.insert(ReqId::ID_GET_VARIFY_CODE, [this](const QJsonObject& jsonObj){
        int error = jsonObj["error"].toInt();
        if(error != ErrorCodes::SUCCESS){
            QLabel *la = findChild<QLabel*>("req_err_tip");
            showTip("参数错误", la, false);
            //添加日志
            return;
        }

        auto email = jsonObj["email"].toString();
        QLabel *la = findChild<QLabel*>("req_err_tip");
        showTip("验证码已发送", la, true);
        qDebug() << "email :" <<email;
    });
}



