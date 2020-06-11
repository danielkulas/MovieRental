/********************************************************************************
** Form generated from reading UI file 'DialogAddMovie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDMOVIE_H
#define UI_DIALOGADDMOVIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAddMovie
{
public:
    QLabel *label_title;
    QLabel *label_category;
    QLabel *label_description;
    QLineEdit *lineEdit_title;
    QLineEdit *lineEdit_category;
    QPushButton *button_cancel;
    QPushButton *button_add;
    QLineEdit *lineEdit_description;

    void setupUi(QDialog *DialogAddMovie)
    {
        if (DialogAddMovie->objectName().isEmpty())
            DialogAddMovie->setObjectName(QString::fromUtf8("DialogAddMovie"));
        DialogAddMovie->resize(640, 307);
        label_title = new QLabel(DialogAddMovie);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(30, 30, 101, 31));
        label_category = new QLabel(DialogAddMovie);
        label_category->setObjectName(QString::fromUtf8("label_category"));
        label_category->setGeometry(QRect(30, 80, 101, 31));
        label_description = new QLabel(DialogAddMovie);
        label_description->setObjectName(QString::fromUtf8("label_description"));
        label_description->setGeometry(QRect(30, 130, 101, 31));
        lineEdit_title = new QLineEdit(DialogAddMovie);
        lineEdit_title->setObjectName(QString::fromUtf8("lineEdit_title"));
        lineEdit_title->setGeometry(QRect(150, 30, 181, 25));
        lineEdit_category = new QLineEdit(DialogAddMovie);
        lineEdit_category->setObjectName(QString::fromUtf8("lineEdit_category"));
        lineEdit_category->setGeometry(QRect(150, 80, 181, 25));
        button_cancel = new QPushButton(DialogAddMovie);
        button_cancel->setObjectName(QString::fromUtf8("button_cancel"));
        button_cancel->setGeometry(QRect(390, 250, 89, 25));
        button_add = new QPushButton(DialogAddMovie);
        button_add->setObjectName(QString::fromUtf8("button_add"));
        button_add->setGeometry(QRect(520, 250, 89, 25));
        lineEdit_description = new QLineEdit(DialogAddMovie);
        lineEdit_description->setObjectName(QString::fromUtf8("lineEdit_description"));
        lineEdit_description->setGeometry(QRect(150, 130, 181, 51));

        retranslateUi(DialogAddMovie);

        QMetaObject::connectSlotsByName(DialogAddMovie);
    } // setupUi

    void retranslateUi(QDialog *DialogAddMovie)
    {
        DialogAddMovie->setWindowTitle(QApplication::translate("DialogAddMovie", "Dialog", nullptr));
        label_title->setText(QApplication::translate("DialogAddMovie", "Title:", nullptr));
        label_category->setText(QApplication::translate("DialogAddMovie", "Category:", nullptr));
        label_description->setText(QApplication::translate("DialogAddMovie", "Description:", nullptr));
        button_cancel->setText(QApplication::translate("DialogAddMovie", "Cancel", nullptr));
        button_add->setText(QApplication::translate("DialogAddMovie", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddMovie: public Ui_DialogAddMovie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDMOVIE_H
