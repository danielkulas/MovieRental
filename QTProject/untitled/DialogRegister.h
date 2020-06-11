#ifndef DIALOGREGISTER_H
#define DIALOGREGISTER_H
#pragma once
#include <QDialog>
#include <fstream>
#include "Authorization.h"
using namespace std;


namespace Ui {
class DialogRegister;
}

class DialogRegister : public QDialog {
    Q_OBJECT

public:
    explicit DialogRegister(QWidget *parent = nullptr);
    ~DialogRegister();
    void init(Authorization* authorization);

private slots:
    void on_button_cancel_clicked();

    void on_button_signin_clicked();

private:
    Authorization* authorization;
    void addUser(QString name, QString lastName, QString login, QString password);
    Ui::DialogRegister *ui;
};

#endif // DIALOGREGISTER_H
