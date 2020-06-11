#ifndef DIALOGRENTEDMOVIES_H
#define DIALOGRENTEDMOVIES_H
#pragma once
#include <QDialog>
#include "User.h"


namespace Ui {
    class DialogRentedMovies;
}

class DialogRentedMovies : public QDialog {
    Q_OBJECT

public:
    explicit DialogRentedMovies(QWidget *parent = nullptr);
    ~DialogRentedMovies();
    void init(User* user);
    void refresh();

private slots:
    void on_button_cancel_clicked();

    void on_button_return_clicked();

    void on_button_refresh_clicked();

private:
    Ui::DialogRentedMovies *ui;
    User* user;
};

#endif // DIALOGRENTEDMOVIES_H
