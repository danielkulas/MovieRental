#include "DialogUsers.h"
#include "ui_DialogUsers.h"


DialogUsers::DialogUsers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogUsers)
    {
        ui->setupUi(this);
    }

DialogUsers::~DialogUsers() {
    delete ui;
}

void DialogUsers::init(Admin* admin) {
    this->admin = admin;
}

void DialogUsers::on_button_close_clicked() {
    close();
}

void DialogUsers::on_button_remove_clicked() {
    if(!ui->tableView->selectedItems().isEmpty()) {
        int row = ui->tableView->selectedItems().first()->row();
        unsigned int id = ui->tableView->takeItem(row, 0)->text().toUInt();
        admin->removeUser(id);
        refresh();
    }
}

void DialogUsers::on_button_refresh_clicked() {
    refresh();
}

void DialogUsers::refresh() {
    ui->tableView->clear();
    ui->tableView->setColumnCount(5);
    ui->tableView->setRowCount(admin->getUserDatabase().size());
    ui->tableView->setHorizontalHeaderItem(0, new QTableWidgetItem("Id"));
    ui->tableView->setHorizontalHeaderItem(1, new QTableWidgetItem("Login"));
    ui->tableView->setHorizontalHeaderItem(2, new QTableWidgetItem("Password"));
    ui->tableView->setHorizontalHeaderItem(3, new QTableWidgetItem("Name"));
    ui->tableView->setHorizontalHeaderItem(4, new QTableWidgetItem("Last name"));

    QTableWidgetItem *newItem;
    int i = 0;
    vector<User*> dataTemp = admin->getUserDatabase();
    for(auto &u : dataTemp) {
        newItem = new QTableWidgetItem(QString::number(u->getId()));
        ui->tableView->setItem(i, 0, newItem);
        newItem = new QTableWidgetItem(QString::fromStdString(u->getLogin()));
        ui->tableView->setItem(i, 1, newItem);
        newItem = new QTableWidgetItem(QString::fromStdString(u->getPassword()));
        ui->tableView->setItem(i, 2, newItem);
        newItem = new QTableWidgetItem(QString::fromStdString(u->getName()));
        ui->tableView->setItem(i, 3, newItem);
        newItem = new QTableWidgetItem(QString::fromStdString(u->getLastName()));
        ui->tableView->setItem(i, 4, newItem);
        i++;
    }
}
