#include "logindialaog.h"
#include "ui_logindialaog.h"

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    connect(ui->registerButton, &QPushButton::clicked, this, &login::switchRegister);
    ui->passEdit->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}
