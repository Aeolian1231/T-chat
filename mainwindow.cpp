 #include "mainwindow.h"
#include "ui_mainwindow.h"

//使用stackedWidget切换界面，性能更好
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);

    _login_dlg = new login(this);
    _reg_dlg = new regist(this);

    stackedWidget->addWidget(_login_dlg);
    stackedWidget->addWidget(_reg_dlg);

    // //链接注册界面
    // connect(_login_dlg, &login::switchRegister, this, &MainWindow::SlotSwitchReg);

    // //链接登录界面
    // connect(_reg_dlg, &regist::switchLogin, this, &MainWindow::SlotSwitchLogin);

    connect(_login_dlg, &login::switchRegister, this, [this]() {
        stackedWidget->setCurrentWidget(_reg_dlg);
    });
    connect(_reg_dlg, &regist::switchLogin, this, [this]() {
        stackedWidget->setCurrentWidget(_login_dlg);
    });

    stackedWidget->setCurrentWidget(_login_dlg);
}

MainWindow::~MainWindow()
{
    delete ui;
    // if(_login_dlg){
    //     delete _login_dlg;
    //     _login_dlg = nullptr;
    // }

    // if(_reg_dlg){
    //     delete _reg_dlg;
    //     _reg_dlg = nullptr;
    // }
}

// void MainWindow::SlotSwitchReg()
// {
//     // _reg_dlg = new regist();
//     setCentralWidget(_reg_dlg);
//     _login_dlg->hide();
//     _reg_dlg->show();
// }

// void MainWindow::SlotSwitchLogin()
// {
//     // _login_dlg = new login();
//     setCentralWidget(_login_dlg);
//     _reg_dlg->hide();
//     _login_dlg->show();
// }
