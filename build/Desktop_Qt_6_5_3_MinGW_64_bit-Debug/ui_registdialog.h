/********************************************************************************
** Form generated from reading UI file 'registdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTDIALOG_H
#define UI_REGISTDIALOG_H

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

class Ui_regist
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
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
    QLabel *email_err_tip;
    QHBoxLayout *horizontalLayout_3;
    QLabel *pass_label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *pass_Edit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *confige_label;
    QLineEdit *confirm_Edit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *pass_err_tip;
    QHBoxLayout *horizontalLayout_5;
    QLabel *verify_label;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *verify_Edit;
    QPushButton *getcode_Button;
    QLabel *req_err_tip;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *confirm_Button;
    QPushButton *cancel_Button;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_2;

    void setupUi(QDialog *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName("regist");
        regist->resize(300, 500);
        regist->setMinimumSize(QSize(300, 500));
        regist->setMaximumSize(QSize(300, 500));
        verticalLayout = new QVBoxLayout(regist);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        stackedWidget = new QStackedWidget(regist);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(page);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 80));
        widget->setMaximumSize(QSize(16777215, 80));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        verticalLayout_3->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        user_label = new QLabel(page);
        user_label->setObjectName("user_label");
        user_label->setMinimumSize(QSize(40, 25));
        user_label->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(user_label);

        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

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
        email_label->setMinimumSize(QSize(30, 25));
        email_label->setMaximumSize(QSize(25, 25));

        horizontalLayout_2->addWidget(email_label);

        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        email_Edit = new QLineEdit(page);
        email_Edit->setObjectName("email_Edit");
        email_Edit->setMinimumSize(QSize(0, 25));
        email_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_2->addWidget(email_Edit);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_3->addLayout(horizontalLayout_2);

        email_err_tip = new QLabel(page);
        email_err_tip->setObjectName("email_err_tip");
        email_err_tip->setMinimumSize(QSize(0, 8));
        email_err_tip->setMaximumSize(QSize(16777215, 8));
        QFont font1;
        font1.setPointSize(6);
        email_err_tip->setFont(font1);
        email_err_tip->setMidLineWidth(-3);
        email_err_tip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(email_err_tip);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pass_label = new QLabel(page);
        pass_label->setObjectName("pass_label");
        pass_label->setMinimumSize(QSize(30, 25));
        pass_label->setMaximumSize(QSize(25, 25));

        horizontalLayout_3->addWidget(pass_label);

        horizontalSpacer_3 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pass_Edit = new QLineEdit(page);
        pass_Edit->setObjectName("pass_Edit");
        pass_Edit->setMinimumSize(QSize(0, 25));
        pass_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_3->addWidget(pass_Edit);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        confige_label = new QLabel(page);
        confige_label->setObjectName("confige_label");
        confige_label->setMinimumSize(QSize(55, 25));
        confige_label->setMaximumSize(QSize(50, 25));

        horizontalLayout_4->addWidget(confige_label);

        confirm_Edit = new QLineEdit(page);
        confirm_Edit->setObjectName("confirm_Edit");
        confirm_Edit->setMinimumSize(QSize(0, 25));
        confirm_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_4->addWidget(confirm_Edit);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_4);

        pass_err_tip = new QLabel(page);
        pass_err_tip->setObjectName("pass_err_tip");
        pass_err_tip->setMinimumSize(QSize(0, 10));
        pass_err_tip->setMaximumSize(QSize(16777215, 10));
        pass_err_tip->setFont(font1);
        pass_err_tip->setTextFormat(Qt::RichText);
        pass_err_tip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(pass_err_tip);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verify_label = new QLabel(page);
        verify_label->setObjectName("verify_label");
        verify_label->setMinimumSize(QSize(40, 25));
        verify_label->setMaximumSize(QSize(40, 25));

        horizontalLayout_5->addWidget(verify_label);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        verify_Edit = new QLineEdit(page);
        verify_Edit->setObjectName("verify_Edit");
        verify_Edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_5->addWidget(verify_Edit);

        getcode_Button = new QPushButton(page);
        getcode_Button->setObjectName("getcode_Button");
        getcode_Button->setMinimumSize(QSize(60, 0));
        getcode_Button->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_5->addWidget(getcode_Button);


        verticalLayout_3->addLayout(horizontalLayout_5);

        req_err_tip = new QLabel(page);
        req_err_tip->setObjectName("req_err_tip");
        req_err_tip->setMinimumSize(QSize(0, 10));
        req_err_tip->setMaximumSize(QSize(16777215, 10));
        req_err_tip->setFont(font1);
        req_err_tip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(req_err_tip);

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

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(regist);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QDialog *regist)
    {
        regist->setWindowTitle(QCoreApplication::translate("regist", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("regist", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        user_label->setText(QCoreApplication::translate("regist", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        email_label->setText(QCoreApplication::translate("regist", "\351\202\256\347\256\261\357\274\232", nullptr));
        email_err_tip->setText(QString());
        pass_label->setText(QCoreApplication::translate("regist", "\345\257\206\347\240\201\357\274\232", nullptr));
        confige_label->setText(QCoreApplication::translate("regist", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        pass_err_tip->setText(QString());
        verify_label->setText(QCoreApplication::translate("regist", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        getcode_Button->setText(QCoreApplication::translate("regist", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        req_err_tip->setText(QString());
        confirm_Button->setText(QCoreApplication::translate("regist", "\347\241\256\350\256\244", nullptr));
        cancel_Button->setText(QCoreApplication::translate("regist", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTDIALOG_H
