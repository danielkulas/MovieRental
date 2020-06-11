/********************************************************************************
** Form generated from reading UI file 'DialogUsers.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGUSERS_H
#define UI_DIALOGUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogUsers
{
public:
    QPushButton *button_close;
    QPushButton *button_remove;
    QTableWidget *tableView;
    QPushButton *button_refresh;

    void setupUi(QDialog *DialogUsers)
    {
        if (DialogUsers->objectName().isEmpty())
            DialogUsers->setObjectName(QString::fromUtf8("DialogUsers"));
        DialogUsers->resize(570, 350);
        button_close = new QPushButton(DialogUsers);
        button_close->setObjectName(QString::fromUtf8("button_close"));
        button_close->setGeometry(QRect(340, 310, 89, 25));
        button_remove = new QPushButton(DialogUsers);
        button_remove->setObjectName(QString::fromUtf8("button_remove"));
        button_remove->setGeometry(QRect(460, 310, 89, 25));
        tableView = new QTableWidget(DialogUsers);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 551, 291));
        button_refresh = new QPushButton(DialogUsers);
        button_refresh->setObjectName(QString::fromUtf8("button_refresh"));
        button_refresh->setGeometry(QRect(20, 310, 89, 25));

        retranslateUi(DialogUsers);

        QMetaObject::connectSlotsByName(DialogUsers);
    } // setupUi

    void retranslateUi(QDialog *DialogUsers)
    {
        DialogUsers->setWindowTitle(QApplication::translate("DialogUsers", "Dialog", nullptr));
        button_close->setText(QApplication::translate("DialogUsers", "Close", nullptr));
        button_remove->setText(QApplication::translate("DialogUsers", "Remove", nullptr));
        button_refresh->setText(QApplication::translate("DialogUsers", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogUsers: public Ui_DialogUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGUSERS_H
