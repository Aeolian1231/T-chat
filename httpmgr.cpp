#include "httpmgr.h"

httpMgr::httpMgr(){
    connect(this, &httpMgr::sig_http_finish, this, &httpMgr::slot_http_finish);
}

void httpMgr::PostHttpReq(QUrl url, QJsonObject json, ReqId req_id, Modules mod)
{
    QByteArray data = QJsonDocument(json).toJson();
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setHeader(QNetworkRequest::ContentLengthHeader, QByteArray::number(data.length()));
    auto self = shared_from_this(); //防止this被删除，再调用自己崩溃
    QNetworkReply * reply = _manager.post(request, data);//获取返回reply
    QObject::connect(reply, &QNetworkReply::finished, [self, reply, req_id, mod](){
        if(reply->error() != QNetworkReply::NoError){//reply错误
            qDebug() <<reply->errorString();
            //发送信号通知完成
            emit self->sig_http_finish(req_id, "", ErrorCodes::ERR_NETWORK, mod);
            reply->deleteLater();
            return;
        }

        //无错误
        QString res = reply->readAll();
        emit self->sig_http_finish(req_id, res, ErrorCodes::SUCCESS, mod);
        reply->deleteLater();
        return;
    });
}

void httpMgr::slot_http_finish(ReqId id, QString res, ErrorCodes err, Modules mod){
    if(mod == Modules::REGISTERMOD){//注册模块，发送信号通知响应结束
        emit sig_reg_mod_finish(id, res, err);
    }
}

httpMgr::~httpMgr(){

}
