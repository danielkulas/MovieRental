/********************************************************************************
** Form generated from reading UI file 'DialogRentMovie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRENTMOVIE_H
#define UI_DIALOGRENTMOVIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogRentMovie
{
public:
    QTableWidget *tableView;
    QPushButton *button_rent;
    QPushButton *button_cancel;
    QPushButton *button_remove;
    QLineEdit *lineEdit_title;
    QLabel *label_title;
    QLineEdit *lineEdit_category;
    QLabel *label_category;
    QPushButton *button_search;
    QPushButton *button_refresh;

    void setupUi(QDialog *DialogRentMovie)
    {
        if (DialogRentMovie->objectName().isEmpty())
            DialogRentMovie->setObjectName(QString::fromUtf8("DialogRentMovie"));
        DialogRentMovie->resize(539, 522);
        tableView = new QTableWidget(DialogRentMovie);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 521, 331));
        button_rent = new QPushButton(DialogRentMovie);
        button_rent->setObjectName(QString::fromUtf8("button_rent"));
        button_rent->setEnabled(false);
        button_rent->setGeometry(QRect(440, 490, 89, 25));
        button_cancel = new QPushButton(DialogRentMovie);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(240, 490, 89, 25));
        button_remove = new QPushButton(DialogRentMovie);
        button_remove->setObjectName(QString::fromUtf8("button_remove"));
        button_remove->setEnabled(false);
        button_remove->setGeometry(QRect(340, 490, 89, 25));
        lineEdit_title = new QLineEdit(DialogRentMovie);
        lineEdit_title->setObjectName(QString::fromUtf8("lineEdit_title"));
        lineEdit_title->setGeometry(QRect(70, 370, 113, 25));
        label_title = new QLabel(DialogRentMovie);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(20, 370, 91, 17));
        lineEdit_category = new QLineEdit(DialogRentMovie);
        lineEdit_category->setObjectName(QString::fromUtf8("lineEdit_category"));
        lineEdit_category->setGeometry(QRect(320, 370, 113, 25));
        label_category = new QLabel(DialogRentMovie);
        label_category->setObjectName(QString::fromUtf8("label_category"));
        label_category->setGeometry(QRect(240, 370, 91, 17));
        button_search = new QPushButton(DialogRentMovie);
        button_search->setObjectName(QString::fromUtf8("button_search"));
        button_search->setGeometry(QRect(440, 410, 89, 25));
        button_refresh = new QPushButton(DialogRentMovie);
        button_refresh->setObjectName(QString::fromUtf8("button_refresh"));
        button_refresh->setGeometry(QRect(450, 340, 71, 25));

        retranslateUi(DialogRentMovie);

        QMetaObject::connectSlotsByName(DialogRentMovie);
    } // setupUi

    void retranslateUi(QDialog *DialogRentMovie)
    {
        DialogRentMovie->setWindowTitle(QApplication::translate("DialogRentMovie", "Dialog", nullptr));
        button_rent->setText(QApplication::translate("DialogRentMovie", "Rent", nullptr));
        button_cancel->setText(QApplication::translate("DialogRentMovie", "Cancel", nullptr));
        button_remove->setText(QApplication::translate("DialogRentMovie", "Remove", nullptr));
        label_title->setText(QApplication::translate("DialogRentMovie", "Title:", nullptr));
        label_category->setText(QApplication::translate("DialogRentMovie", "Category: ", nullptr));
        button_search->setText(QApplication::translate("DialogRentMovie", "Search", nullptr));
        button_refresh->setText(QApplication::translate("DialogRentMovie", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRentMovie: public Ui_DialogRentMovie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRENTMOVIE_H
