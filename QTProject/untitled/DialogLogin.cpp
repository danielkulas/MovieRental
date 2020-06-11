#include "DialogLogin.h"
#include "ui_dialog.h"


DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin) {
    ui->setupUi(this);
}

DialogLogin::~DialogLogin() {
    if(dialogRegister != nullptr)
        delete dialogRegister;
    delete ui;
}

void DialogLogin::init(MainWindow *mainWindow) {
    this->mainWindow = mainWindow;
}


void DialogLogin::enableLineFields() {
    ui->lineEdit_login->setEnabled(true);
    ui->lineEdit_password->setEnabled(true);
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
}

void DialogLogin::disableLineFields() {
    ui->lineEdit_login->setEnabled(false);
    ui->lineEdit_password->setEnabled(false);
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
}

void DialogLogin::on_radio_Guest_clicked() {
    disableLineFields();
}

void DialogLogin::on_radio_User_clicked() {
    enableLineFields();
}

void DialogLogin::on_radio_Admin_clicked() {
    enableLineFields();
}

void DialogLogin::on_button_login_clicked() {
    string login = ui->lineEdit_login->text().toUtf8().constData();
    string password = ui->lineEdit_password->text().toUtf8().constData();

    if(ui->radio_Guest->isChecked()) {
        mainWindow->setGuest(new Guest());
        close();
    }
    else if(ui->radio_User->isChecked()){
        User* user = mainWindow->getAuthorization()->login(login, password);
        if(user != nullptr) {
            mainWindow->setUser(user);
            close();
        }
    }
    else if(ui->radio_Admin->isChecked()) {
        Admin* admin = mainWindow->getAuthorization()->loginAdmin(login, password);
        if(admin != nullptr) {
            mainWindow->setAdmin(admin);
            close();
        }
    }
}

void DialogLogin::on_button_signin_clicked() {
    dialogRegister = new DialogRegister();
    dialogRegister->init(mainWindow->getAuthorization());
    dialogRegister->setModal(true);
    dialogRegister->exec();
}
