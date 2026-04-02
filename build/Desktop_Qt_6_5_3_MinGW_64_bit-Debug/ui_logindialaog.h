/********************************************************************************
** Form generated from reading UI file 'logindialaog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALAOG_H
#define UI_LOGINDIALAOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *userlabel;
    QLineEdit *useredit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *passEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *loginButton;
    QPushButton *registerButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(277, 425);
        login->setMinimumSize(QSize(10, 10));
        login->setMaximumSize(QSize(399, 425));
        verticalLayout_2 = new QVBoxLayout(login);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(login);
        widget->setObjectName("widget");
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/icon.png")));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout_3->addWidget(label);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        userlabel = new QLabel(login);
        userlabel->setObjectName("userlabel");
        userlabel->setMinimumSize(QSize(40, 25));
        userlabel->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(userlabel);

        useredit = new QLineEdit(login);
        useredit->setObjectName("useredit");
        useredit->setMinimumSize(QSize(200, 25));
        useredit->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(useredit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(30, 25));
        label_2->setMaximumSize(QSize(25, 25));

        horizontalLayout_2->addWidget(label_2);

        passEdit = new QLineEdit(login);
        passEdit->setObjectName("passEdit");
        passEdit->setMinimumSize(QSize(200, 25));
        passEdit->setMaximumSize(QSize(200, 25));

        horizontalLayout_2->addWidget(passEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(login);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        loginButton = new QPushButton(login);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(50, 25));
        loginButton->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(loginButton);

        registerButton = new QPushButton(login);
        registerButton->setObjectName("registerButton");
        registerButton->setMinimumSize(QSize(50, 25));
        registerButton->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(registerButton);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label->setText(QString());
        userlabel->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        registerButton->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALAOG_H
