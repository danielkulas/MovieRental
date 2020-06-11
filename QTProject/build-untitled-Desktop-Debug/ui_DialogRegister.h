/********************************************************************************
** Form generated from reading UI file 'DialogRegister.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREGISTER_H
#define UI_DIALOGREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_DialogRegister
{
public:
    QPushButton *button_cancel;
    QPushButton *button_signin;
    QLabel *label_name;
    QLabel *label_lastname;
    QLabel *label_login;
    QLabel *label_password;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_lastname;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_password;
    QRadioButton *radio_user;
    QRadioButton *radio_admin;

    void setupUi(QDialog *DialogRegister)
    {
        if (DialogRegister->objectName().isEmpty())
            DialogRegister->setObjectName(QString::fromUtf8("DialogRegister"));
        DialogRegister->resize(640, 257);
        button_cancel = new QPushButton(DialogRegister);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(400, 210, 89, 25));
        button_signin = new QPushButton(DialogRegister);
        button_signin->setObjectName(QString::fromUtf8("button_signin"));
        button_signin->setGeometry(QRect(520, 210, 89, 25));
        label_name = new QLabel(DialogRegister);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(30, 30, 101, 17));
        label_lastname = new QLabel(DialogRegister);
        label_lastname->setObjectName(QString::fromUtf8("label_lastname"));
        label_lastname->setGeometry(QRect(30, 70, 101, 17));
        label_login = new QLabel(DialogRegister);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(30, 120, 101, 17));
        label_password = new QLabel(DialogRegister);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(30, 170, 101, 17));
        lineEdit_name = new QLineEdit(DialogRegister);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(130, 20, 161, 25));
        lineEdit_lastname = new QLineEdit(DialogRegister);
        lineEdit_lastname->setObjectName(QString::fromUtf8("lineEdit_lastname"));
        lineEdit_lastname->setGeometry(QRect(130, 70, 161, 25));
        lineEdit_login = new QLineEdit(DialogRegister);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(130, 120, 161, 25));
        lineEdit_password = new QLineEdit(DialogRegister);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(130, 160, 161, 25));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        radio_user = new QRadioButton(DialogRegister);
        radio_user->setObjectName(QString::fromUtf8("radio_user"));
        radio_user->setGeometry(QRect(490, 20, 131, 23));
        radio_user->setChecked(true);
        radio_admin = new QRadioButton(DialogRegister);
        radio_admin->setObjectName(QString::fromUtf8("radio_admin"));
        radio_admin->setGeometry(QRect(490, 50, 141, 23));

        retranslateUi(DialogRegister);

        QMetaObject::connectSlotsByName(DialogRegister);
    } // setupUi

    void retranslateUi(QDialog *DialogRegister)
    {
        DialogRegister->setWindowTitle(QApplication::translate("DialogRegister", "Dialog", nullptr));
        button_cancel->setText(QApplication::translate("DialogRegister", "Cancel", nullptr));
        button_signin->setText(QApplication::translate("DialogRegister", "Sign in", nullptr));
        label_name->setText(QApplication::translate("DialogRegister", "Name:", nullptr));
        label_lastname->setText(QApplication::translate("DialogRegister", "Last name:", nullptr));
        label_login->setText(QApplication::translate("DialogRegister", "Login:", nullptr));
        label_password->setText(QApplication::translate("DialogRegister", "Password:", nullptr));
        radio_user->setText(QApplication::translate("DialogRegister", "User", nullptr));
        radio_admin->setText(QApplication::translate("DialogRegister", "Administrator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRegister: public Ui_DialogRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREGISTER_H
