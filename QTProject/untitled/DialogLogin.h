#ifndef DIALOG_H
#define DIALOG_H
#pragma once
#include <QDialog>
#include <fstream>
#include "MainWindow.h"
#include "DialogRegister.h"


class MainWindow;
namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = nullptr);
    ~DialogLogin();
    void init(MainWindow* mainWindow);

private slots:
    void on_button_login_clicked();

    void on_button_signin_clicked();

    void on_radio_User_clicked();

    void on_radio_Admin_clicked();

    void on_radio_Guest_clicked();

private:
    MainWindow* mainWindow;
    Ui::DialogLogin *ui;
    DialogRegister* dialogRegister;
    void enableLineFields();
    void disableLineFields();
    bool validLoginAndPassword(QString database, QString login, QString password, bool isAdminBoolean);

};

#endif // DIALOG_H
