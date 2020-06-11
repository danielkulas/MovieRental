/********************************************************************************
** Form generated from reading UI file 'DialogRentedMovies.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRENTEDMOVIES_H
#define UI_DIALOGRENTEDMOVIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogRentedMovies
{
public:
    QPushButton *button_cancel;
    QPushButton *button_return;
    QTableWidget *tableView;
    QPushButton *button_refresh;

    void setupUi(QDialog *DialogRentedMovies)
    {
        if (DialogRentedMovies->objectName().isEmpty())
            DialogRentedMovies->setObjectName(QString::fromUtf8("DialogRentedMovies"));
        DialogRentedMovies->resize(542, 412);
        button_cancel = new QPushButton(DialogRentedMovies);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(302, 370, 89, 25));
        button_return = new QPushButton(DialogRentedMovies);
        button_return->setObjectName(QString::fromUtf8("button_return"));
        button_return->setGeometry(QRect(420, 370, 111, 25));
        tableView = new QTableWidget(DialogRentedMovies);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 521, 291));
        button_refresh = new QPushButton(DialogRentedMovies);
        button_refresh->setObjectName(QString::fromUtf8("button_refresh"));
        button_refresh->setGeometry(QRect(430, 300, 89, 25));

        retranslateUi(DialogRentedMovies);

        QMetaObject::connectSlotsByName(DialogRentedMovies);
    } // setupUi

    void retranslateUi(QDialog *DialogRentedMovies)
    {
        DialogRentedMovies->setWindowTitle(QApplication::translate("DialogRentedMovies", "Dialog", nullptr));
        button_cancel->setText(QApplication::translate("DialogRentedMovies", "Cancel", nullptr));
        button_return->setText(QApplication::translate("DialogRentedMovies", "Return movie", nullptr));
        button_refresh->setText(QApplication::translate("DialogRentedMovies", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRentedMovies: public Ui_DialogRentedMovies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRENTEDMOVIES_H
