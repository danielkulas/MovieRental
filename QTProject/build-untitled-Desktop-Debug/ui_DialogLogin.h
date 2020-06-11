/********************************************************************************
** Form generated from reading UI file 'DialogLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QRadioButton *radio_Admin;
    QLabel *loginLabel;
    QRadioButton *radio_User;
    QLabel *passLabel;
    QRadioButton *radio_Guest;
    QLineEdit *lineEdit_login;
    QPushButton *button_login;
    QPushButton *button_signin;
    QLineEdit *lineEdit_password;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(640, 290);
        Dialog->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        radio_Admin = new QRadioButton(Dialog);
        radio_Admin->setObjectName(QString::fromUtf8("radio_Admin"));
        radio_Admin->setGeometry(QRect(460, 90, 141, 23));
        loginLabel = new QLabel(Dialog);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setGeometry(QRect(20, 20, 91, 41));
        radio_User = new QRadioButton(Dialog);
        radio_User->setObjectName(QString::fromUtf8("radio_User"));
        radio_User->setGeometry(QRect(460, 60, 141, 23));
        passLabel = new QLabel(Dialog);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        passLabel->setGeometry(QRect(20, 60, 91, 41));
        radio_Guest = new QRadioButton(Dialog);
        radio_Guest->setObjectName(QString::fromUtf8("radio_Guest"));
        radio_Guest->setGeometry(QRect(460, 30, 141, 23));
        radio_Guest->setChecked(true);
        lineEdit_login = new QLineEdit(Dialog);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setEnabled(false);
        lineEdit_login->setGeometry(QRect(110, 30, 151, 25));
        button_login = new QPushButton(Dialog);
        button_login->setObjectName(QString::fromUtf8("button_login"));
        button_login->setGeometry(QRect(520, 240, 89, 25));
        button_signin = new QPushButton(Dialog);
        button_signin->setObjectName(QString::fromUtf8("button_signin"));
        button_signin->setGeometry(QRect(410, 240, 89, 25));
        lineEdit_password = new QLineEdit(Dialog);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEnabled(false);
        lineEdit_password->setGeometry(QRect(110, 70, 151, 25));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        radio_Admin->setText(QApplication::translate("Dialog", "Administrator", nullptr));
        loginLabel->setText(QApplication::translate("Dialog", "Login:", nullptr));
        radio_User->setText(QApplication::translate("Dialog", "User", nullptr));
        passLabel->setText(QApplication::translate("Dialog", "Password:", nullptr));
        radio_Guest->setText(QApplication::translate("Dialog", "Guest", nullptr));
        button_login->setText(QApplication::translate("Dialog", "Log in", nullptr));
        button_signin->setText(QApplication::translate("Dialog", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
