#include "MainWindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
        ui->setupUi(this);
        authorization = new Authorization();
        guest = nullptr;
        user = nullptr;
        admin = nullptr;

        dialogLogin = new DialogLogin();
        dialogLogin->init(this);
        dialogLogin->setModal(true);
        dialogLogin->exec();

        if(guest != nullptr) {
            ui->browseMoviesButton->setEnabled(true);
        }
        else if(user != nullptr) {
            ui->browseMoviesButton->setEnabled(true);
            ui->rentalHistoryButton->setEnabled(true);
            ui->watchedButton->setEnabled(true);
        }
        else if(admin != nullptr) {
            ui->browseMoviesButton->setEnabled(true);
            ui->addMovieButton->setEnabled(true);
            ui->manageUsersButton->setEnabled(true);
        }
    }


MainWindow::~MainWindow() {
    delete dialogLogin;
    delete dialogAddMovie;
    delete ui;
}

void MainWindow::on_exitButton_clicked() {
    exit(0);
}

void MainWindow::on_addMovieButton_clicked() {
    dialogAddMovie = new DialogAddMovie();
    dialogAddMovie->init(admin);
    dialogAddMovie->setModal(true);
    dialogAddMovie->exec();
}

void MainWindow::on_manageUsersButton_clicked() {
    dialogUsers = new DialogUsers();
    dialogUsers->init(admin);
    dialogUsers->setModal(true);
    dialogUsers->exec();
    dialogUsers->refresh();
}

void MainWindow::on_browseMoviesButton_clicked() {
    dialogRentMovie = new DialogRentMovie();
    dialogRentMovie->init(guest, admin, user);
    dialogRentMovie->setModal(true);
    dialogRentMovie->exec();
    dialogRentMovie->refresh();
}

void MainWindow::on_rentalHistoryButton_clicked() {
    dialogRentedMovies = new DialogRentedMovies();
    dialogRentedMovies->init(user);
    dialogRentedMovies->setModal(true);
    dialogRentedMovies->exec();
    dialogRentedMovies->refresh();
}

void MainWindow::on_watchedButton_clicked() {
    dialogWatchedMovies = new DialogWatchedMovies();
    dialogWatchedMovies->init(user);
    dialogWatchedMovies->setModal(true);
    dialogWatchedMovies->exec();
    dialogWatchedMovies->refresh();
}


void MainWindow::setGuest(class Guest* guest) {
    this->guest = guest;
}

void MainWindow::setUser(class User* user) {
    this->user = user;
}

void MainWindow::setAdmin(class Admin* admin) {
    this->admin = admin;
}

Authorization* MainWindow::getAuthorization() {
    return authorization;
}
