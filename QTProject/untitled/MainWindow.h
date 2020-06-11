#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#pragma once
#include <QMainWindow>
#include "DialogLogin.h"
#include "DialogAddMovie.h"
#include "DialogUsers.h"
#include "DialogRentMovie.h"
#include "DialogRentedMovies.h"
#include "DialogWatchedMovies.h"
#include "Guest.h"
#include "User.h"
#include "Admin.h"
#include "Authorization.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setGuest(class Guest* guest);
    void setUser(class User* user);
    void setAdmin(class Admin* admin);
    Authorization* getAuthorization();

private slots:
    void on_exitButton_clicked();

    void on_addMovieButton_clicked();

    void on_manageUsersButton_clicked();

    void on_browseMoviesButton_clicked();

    void on_rentalHistoryButton_clicked();

    void on_watchedButton_clicked();

private:
    Authorization* authorization;
    class Guest* guest;
    class User* user;
    class Admin* admin;
    Ui::MainWindow *ui;
    class DialogLogin* dialogLogin;
    DialogUsers* dialogUsers;
    DialogAddMovie* dialogAddMovie;
    DialogRentMovie* dialogRentMovie;
    DialogRentedMovies* dialogRentedMovies;
    DialogWatchedMovies* dialogWatchedMovies;
};


#endif // MAINWINDOW_H
