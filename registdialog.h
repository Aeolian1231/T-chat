#ifndef REGISTDIALOG_H
#define REGISTDIALOG_H

#include <QDialog>
#include <QLabel>
#include "global.h"

namespace Ui {
class regist;
}

class regist : public QDialog
{
    Q_OBJECT

public:
    explicit regist(QWidget *parent = nullptr);
    ~regist();

private:
    Ui::regist *ui;
    void showTip(QString str, QLabel* label, bool ok);
    void initHttpHandlers();
    QMap<ReqId, std::function<void(const QJsonObject&)>> _handler;
signals:
    void switchLogin();
private slots:
    void on_getcode_Button_clicked();
    void on_confirm_Button_clicked();
    void slot_reg_mod_finish(ReqId id, QString res, ErrorCodes err);
};

#endif // REGISTDIALOG_H
