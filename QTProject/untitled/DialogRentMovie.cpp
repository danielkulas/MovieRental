#include "DialogRentMovie.h"
#include "ui_DialogRentMovie.h"


DialogRentMovie::DialogRentMovie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRentMovie)
    {
        ui->setupUi(this);
    }

DialogRentMovie::~DialogRentMovie() {
    delete ui;
}

void DialogRentMovie::init(Guest *guest, Admin *admin, User *user) {
    this->guest = guest;
    this->admin = admin;
    this->user = user;

    if(user != nullptr) {
        this->guest = user;
        ui->button_rent->setEnabled(true);
    }

    if(admin != nullptr) {
        this->guest = admin;
        ui->button_remove->setEnabled(true);
    }
}

void DialogRentMovie::on_button_cancel_clicked() {
    close();
}

void DialogRentMovie::on_button_remove_clicked() {
    if(!ui->tableView->selectedItems().isEmpty()) {
        int row = ui->tableView->selectedItems().first()->row();
        unsigned int id = ui->tableView->takeItem(row, 0)->text().toUInt();
        admin->removeMovie(id);
        refresh();
    }
}

void DialogRentMovie::on_button_rent_clicked() {
    if(!ui->tableView->selectedItems().isEmpty()) {
        int row = ui->tableView->selectedItems().first()->row();
        unsigned int id = ui->tableView->takeItem(row, 0)->text().toUInt();
        user->rentMovie(id);
    }
}

void DialogRentMovie::on_button_search_clicked() {
    QString title = ui->lineEdit_title->text();
    QString category = ui->lineEdit_category->text();

    if(!title.isEmpty()) { //Search by title
        search(title, 1);
    }
    if(!category.isEmpty()) { //Search category
        search(category, 2);
    }
}

void DialogRentMovie::search(QString searchText, int searchColumn) {
    QList<QTableWidgetItem*> tempTable = ui->tableView->findItems(searchText, Qt::MatchEndsWith);
    QList<QTableWidgetItem*> newTable;

    for(auto m : tempTable) {
        int col = m->column();
        if(col == searchColumn) {
            int row = m->row();
            newTable.push_back(new QTableWidgetItem(ui->tableView->item(row, 0)->text()));
            newTable.push_back(new QTableWidgetItem(ui->tableView->item(row, 1)->text()));
            newTable.push_back(new QTableWidgetItem(ui->tableView->item(row, 2)->text()));
            newTable.push_back(new QTableWidgetItem(ui->tableView->item(row, 3)->text()));
            newTable.push_back(new QTableWidgetItem(ui->tableView->item(row, 4)->text()));
        }
    }

    ui->tableView->clear();
    ui->tableView->setRowCount(newTable.size()/5);

    int i = 0;
    int j = 0;
    for(auto m : newTable) {
        ui->tableView->setItem(i, j, m);
        j++;

        if(j == 5) {
            j = 0;
            i++;
        }
    }
}

void DialogRentMovie::on_button_refresh_clicked() {
    refresh();
}

void DialogRentMovie::refresh() {
    ui->tableView->clear();
    ui->tableView->setColumnCount(5);
    ui->tableView->setRowCount(guest->getMovieDatabase().size());
    ui->tableView->setHorizontalHeaderItem(0, new QTableWidgetItem("Id"));
    ui->tableView->setHorizontalHeaderItem(1, new QTableWidgetItem("Title"));
    ui->tableView->setHorizontalHeaderItem(2, new QTableWidgetItem("Category"));
    ui->tableView->setHorizontalHeaderItem(3, new QTableWidgetItem("Description"));
    ui->tableView->setHorizontalHeaderItem(4, new QTableWidgetItem("Rating"));

    QTableWidgetItem *newItem;
    int i = 0;
    vector<Movie*> dataTemp = guest->getMovieDatabase();
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
