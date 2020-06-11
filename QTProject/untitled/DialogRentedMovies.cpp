#include "DialogRentedMovies.h"
#include "ui_DialogRentedMovies.h"


DialogRentedMovies::DialogRentedMovies(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRentedMovies)
    {
        ui->setupUi(this);
    }

DialogRentedMovies::~DialogRentedMovies() {
    delete ui;
}

void DialogRentedMovies::init(User *user) {
    this->user = user;
}

void DialogRentedMovies::on_button_cancel_clicked() {
    close();
}

void DialogRentedMovies::on_button_return_clicked() {
    if(!ui->tableView->selectedItems().isEmpty()) {
        int row = ui->tableView->selectedItems().first()->row();
        unsigned int id = ui->tableView->takeItem(row, 0)->text().toUInt();
        user->returnMovie(id);
        refresh();
    }
}

void DialogRentedMovies::on_button_refresh_clicked() {
    refresh();
}

void DialogRentedMovies::refresh() {
    ui->tableView->clear();
    ui->tableView->setColumnCount(5);
    ui->tableView->setRowCount(user->getRentedMovies().size());
    ui->tableView->setHorizontalHeaderItem(0, new QTableWidgetItem("Id"));
    ui->tableView->setHorizontalHeaderItem(1, new QTableWidgetItem("Title"));
    ui->tableView->setHorizontalHeaderItem(2, new QTableWidgetItem("Category"));
    ui->tableView->setHorizontalHeaderItem(3, new QTableWidgetItem("Description"));
    ui->tableView->setHorizontalHeaderItem(4, new QTableWidgetItem("Rating"));

    QTableWidgetItem *newItem;
    int i = 0;
    vector<Movie*> dataTemp = user->getRentedMovies();
    for(auto &u : dataTemp) {
        newItem = new QTableWidgetItem(QString::number(u->getId()));
        ui->tableView->setItem(i, 0, newItem);
        newItem = new QTableWidgetItem(QString::fromStdString(u->getTitle()));
        ui->tableView->setItem(i, 1, newItem);
        newItem = new QTableWidgetItem(QString::fromStdString(u->getCategory()));
        ui->tableView->setItem(i, 2, newItem);
        newItem = new QTableWidgetItem(QString::fromStdString(u->getDescription()));
        ui->tableView->setItem(i, 3, newItem);
        newItem = new QTableWidgetItem(QString::number(u->getRating()));
        ui->tableView->setItem(i, 4, newItem);
        i++;
    }
}
