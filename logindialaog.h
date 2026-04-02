#ifndef LOGINDIALAOG_H
#define LOGINDIALAOG_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private:
    Ui::login *ui;
signals:
    void switchRegister();
};

#endif // LOGINDIALAOG_H
