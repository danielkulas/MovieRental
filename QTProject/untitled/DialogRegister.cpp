#include "DialogRegister.h"
#include "ui_DialogRegister.h"


DialogRegister::DialogRegister(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRegister) {
        ui->setupUi(this);
    }

DialogRegister::~DialogRegister() {
    delete ui;
}

void DialogRegister::init(Authorization* authorization) {
    this->authorization = authorization;
}

void DialogRegister::on_button_cancel_clicked() {
    close();
}

void DialogRegister::on_button_signin_clicked() {
    string login = ui->lineEdit_login->text().toUtf8().constData();
    string password = ui->lineEdit_password->text().toUtf8().constData();
    string name = ui->lineEdit_name->text().toUtf8().constData();
    string lastName = ui->lineEdit_lastname->text().toUtf8().constData();

    if(ui->radio_user->isChecked()) {
        authorization->registerUser(login, password, name, lastName);
    }
    else if(ui->radio_admin->isChecked()) {
        authorization->registerAdmin(login, password);
    }

    close();
}
