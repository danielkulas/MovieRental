/********************************************************************************
** Form generated from reading UI file 'DialogWatchedMovies.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWATCHEDMOVIES_H
#define UI_DIALOGWATCHEDMOVIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogWatchedMovies
{
public:
    QPushButton *button_cancel;
    QPushButton *button_rate;
    QTableWidget *tableView;
    QPushButton *button_refresh;
    QLabel *label_rate;
    QLineEdit *lineEdit_rate;

    void setupUi(QDialog *DialogWatchedMovies)
    {
        if (DialogWatchedMovies->objectName().isEmpty())
            DialogWatchedMovies->setObjectName(QString::fromUtf8("DialogWatchedMovies"));
        DialogWatchedMovies->resize(560, 405);
        button_cancel = new QPushButton(DialogWatchedMovies);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(340, 360, 89, 25));
        button_rate = new QPushButton(DialogWatchedMovies);
        button_rate->setObjectName(QString::fromUtf8("button_rate"));
        button_rate->setGeometry(QRect(450, 360, 89, 25));
        tableView = new QTableWidget(DialogWatchedMovies);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 541, 281));
        button_refresh = new QPushButton(DialogWatchedMovies);
        button_refresh->setObjectName(QString::fromUtf8("button_refresh"));
        button_refresh->setGeometry(QRect(450, 290, 89, 25));
        label_rate = new QLabel(DialogWatchedMovies);
        label_rate->setObjectName(QString::fromUtf8("label_rate"));
        label_rate->setGeometry(QRect(10, 300, 67, 17));
        lineEdit_rate = new QLineEdit(DialogWatchedMovies);
        lineEdit_rate->setObjectName(QString::fromUtf8("lineEdit_rate"));
        lineEdit_rate->setGeometry(QRect(70, 300, 113, 25));
        lineEdit_rate->setInputMethodHints(Qt::ImhDigitsOnly);

        retranslateUi(DialogWatchedMovies);

        QMetaObject::connectSlotsByName(DialogWatchedMovies);
    } // setupUi

    void retranslateUi(QDialog *DialogWatchedMovies)
    {
        DialogWatchedMovies->setWindowTitle(QApplication::translate("DialogWatchedMovies", "Dialog", nullptr));
        button_cancel->setText(QApplication::translate("DialogWatchedMovies", "Cancel", nullptr));
        button_rate->setText(QApplication::translate("DialogWatchedMovies", "Rate", nullptr));
        button_refresh->setText(QApplication::translate("DialogWatchedMovies", "Refresh", nullptr));
        label_rate->setText(QApplication::translate("DialogWatchedMovies", "Rate:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogWatchedMovies: public Ui_DialogWatchedMovies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWATCHEDMOVIES_H
