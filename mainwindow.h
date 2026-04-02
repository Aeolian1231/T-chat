#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "logindialaog.h"
#include "registdialog.h"
/******************************************************************************
 *
 * @file       mainwindow.h
 * @brief      XXXX Function
 *
 * @author     代煜滨
 * @date       2025/05/20 项目开始
 * @history    2025/6/1 完成框架构造，登录和注册界面切换，注册密码确认和邮箱检查
 *             2025/6/15 完成单例类下http管理者，post逻辑，注册验证码解析逻辑
 *****************************************************************************/

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
// public slots:
//     void SlotSwitchReg();
//     void SlotSwitchLogin();

private:
    Ui::MainWindow *ui;
    QStackedWidget *stackedWidget;
    login * _login_dlg;
    regist * _reg_dlg;
};
#endif // MAINWINDOW_H
