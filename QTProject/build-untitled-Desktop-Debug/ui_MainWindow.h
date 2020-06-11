/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *exitButton;
    QPushButton *browseMoviesButton;
    QPushButton *addMovieButton;
    QPushButton *manageUsersButton;
    QPushButton *rentalHistoryButton;
    QPushButton *watchedButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(573, 290);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(470, 240, 89, 25));
        browseMoviesButton = new QPushButton(centralwidget);
        browseMoviesButton->setObjectName(QString::fromUtf8("browseMoviesButton"));
        browseMoviesButton->setEnabled(false);
        browseMoviesButton->setGeometry(QRect(30, 40, 151, 25));
        addMovieButton = new QPushButton(centralwidget);
        addMovieButton->setObjectName(QString::fromUtf8("addMovieButton"));
        addMovieButton->setEnabled(false);
        addMovieButton->setGeometry(QRect(30, 190, 151, 25));
        manageUsersButton = new QPushButton(centralwidget);
        manageUsersButton->setObjectName(QString::fromUtf8("manageUsersButton"));
        manageUsersButton->setEnabled(false);
        manageUsersButton->setGeometry(QRect(30, 240, 151, 25));
        rentalHistoryButton = new QPushButton(centralwidget);
        rentalHistoryButton->setObjectName(QString::fromUtf8("rentalHistoryButton"));
        rentalHistoryButton->setEnabled(false);
        rentalHistoryButton->setGeometry(QRect(30, 90, 151, 25));
        watchedButton = new QPushButton(centralwidget);
        watchedButton->setObjectName(QString::fromUtf8("watchedButton"));
        watchedButton->setEnabled(false);
        watchedButton->setGeometry(QRect(30, 140, 151, 25));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Movie Rental", nullptr));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        browseMoviesButton->setText(QApplication::translate("MainWindow", "Browse movies", nullptr));
        addMovieButton->setText(QApplication::translate("MainWindow", "Add movie", nullptr));
        manageUsersButton->setText(QApplication::translate("MainWindow", "Manage users", nullptr));
        rentalHistoryButton->setText(QApplication::translate("MainWindow", "Rented movies", nullptr));
        watchedButton->setText(QApplication::translate("MainWindow", "Watched movies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
