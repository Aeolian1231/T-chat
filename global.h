#ifndef GLOBAL_H
#define GLOBAL_H

#include <QWidget>
#include <functional>
#include <QRegularExpression>
#include <QTimer>
#include "QStyle"
#include <memory>
#include <iostream>
#include <mutex>
#include <QByteArray>
#include <QNetworkReply>
#include <QMap>

extern std::function<void(QWidget*)> repolish;//刷新qss

enum ReqId{
    ID_GET_VARIFY_CODE = 1001,// 获取验证码
    ID_REG_USER = 1002,// 注册用户
};

enum Modules{
    REGISTERMOD = 0,
};

enum ErrorCodes{// 错误处理
    SUCCESS = 0,
    ERR_JSON = 1,// json解析失败
    ERR_NETWORK = 2,// 网络错误
};

#endif // GLOBAL_H
