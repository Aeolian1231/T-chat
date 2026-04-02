/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *user_label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *user_Edit;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email_label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *email_Edit;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *pass_label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *pass_lineEdit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *confige_label;
    QLineEdit *confige_lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *verify_label;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *verify_Edit;
    QPushButton *getcode_Button;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *confirm_Button;
    QPushButton *cancel_Button;
    QWidget *page_2;

    void setupUi(QDialog *register)
    {
        if (register->objectName().isEmpty())
            register->setObjectName("register");
        register->resize(291, 446);
        verticalLayout = new QVBoxLayout(register);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget = new QStackedWidget(register);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_label = new QLabel(page);
        user_label->setObjectName("user_label");
        user_label->setMinimumSize(QSize(40, 25));
        user_label->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(user_label);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        user_Edit = new QLineEdit(page);
        user_Edit->setObjectName("user_Edit");
        user_Edit->setMinimumSize(QSize(0, 25));
        user_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout->addWidget(user_Edit);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        email_label = new QLabel(page);
        email_label->setObjectName("email_label");
        email_label->setMinimumSize(QSize(25, 25));
        email_label->setMaximumSize(QSize(25, 25));

        horizontalLayout_2->addWidget(email_label);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        email_Edit = new QLineEdit(page);
        email_Edit->setObjectName("email_Edit");
        email_Edit->setMinimumSize(QSize(0, 25));
        email_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email_Edit);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pass_label = new QLabel(page);
        pass_label->setObjectName("pass_label");
        pass_label->setMinimumSize(QSize(25, 25));
        pass_label->setMaximumSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pass_label);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pass_lineEdit = new QLineEdit(page);
        pass_lineEdit->setObjectName("pass_lineEdit");
        pass_lineEdit->setMinimumSize(QSize(0, 25));
        pass_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(pass_lineEdit);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        confige_label = new QLabel(page);
        confige_label->setObjectName("confige_label");
        confige_label->setMinimumSize(QSize(50, 25));
        confige_label->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(confige_label);

        confige_lineEdit = new QLineEdit(page);
        confige_lineEdit->setObjectName("confige_lineEdit");
        confige_lineEdit->setMinimumSize(QSize(0, 25));
        confige_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confige_lineEdit);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verify_label = new QLabel(page);
        verify_label->setObjectName("verify_label");
        verify_label->setMinimumSize(QSize(40, 25));
        verify_label->setMaximumSize(QSize(40, 25));

        horizontalLayout_5->addWidget(verify_label);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        verify_Edit = new QLineEdit(page);
        verify_Edit->setObjectName("verify_Edit");

        horizontalLayout_5->addWidget(verify_Edit);

        getcode_Button = new QPushButton(page);
        getcode_Button->setObjectName("getcode_Button");
        getcode_Button->setMinimumSize(QSize(60, 0));
        getcode_Button->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_5->addWidget(getcode_Button);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        confirm_Button = new QPushButton(page);
        confirm_Button->setObjectName("confirm_Button");
        confirm_Button->setMinimumSize(QSize(0, 25));
        confirm_Button->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(confirm_Button);

        cancel_Button = new QPushButton(page);
        cancel_Button->setObjectName("cancel_Button");
        cancel_Button->setMinimumSize(QSize(0, 25));
        cancel_Button->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(cancel_Button);


        verticalLayout_3->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(register);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(register);
    } // setupUi

    void retranslateUi(QDialog *register)
    {
        register->setWindowTitle(QCoreApplication::translate("register", "Dialog", nullptr));
        user_label->setText(QCoreApplication::translate("register", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        email_label->setText(QCoreApplication::translate("register", "\351\202\256\347\256\261\357\274\232", nullptr));
        pass_label->setText(QCoreApplication::translate("register", "\345\257\206\347\240\201\357\274\232", nullptr));
        confige_label->setText(QCoreApplication::translate("register", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        verify_label->setText(QCoreApplication::translate("register", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        getcode_Button->setText(QCoreApplication::translate("register", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        confirm_Button->setText(QCoreApplication::translate("register", "\347\241\256\350\256\244", nullptr));
        cancel_Button->setText(QCoreApplication::translate("register", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
