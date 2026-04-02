#ifndef HTTPMGR_H
#define HTTPMGR_H
#include "singleton.h"
#include <qstring.h>
#include <QUrl>
#include <QObject>
#include <QNetworkAccessManager>
#include <QJsonObject>
#include <QJsonDocument>

//CRTP奇异递归模版
class httpMgr:  public QObject,//信号和槽
                public Singleton<httpMgr>,
                public std::enable_shared_from_this<httpMgr>
{
    Q_OBJECT
public:
    ~httpMgr();//析构函数公有允许访问
private:
    friend class Singleton<httpMgr>;//声明友元，允许基类访问构造函数
    httpMgr();//构造函数必须私有
    QNetworkAccessManager _manager;//http管理者
    void PostHttpReq(QUrl url, QJsonObject json, ReqId req_id, Modules module);
private slots://槽函数
    void slot_http_finish(ReqId id, QString res, ErrorCodes err, Modules mod);
signals:
    void sig_http_finish(ReqId id, QString res, ErrorCodes err, Modules mod);//结束信号
    void sig_reg_mod_finish(ReqId id, QString res, ErrorCodes err);//注册信号->regist
};

#endif // HTTPMGR_H
