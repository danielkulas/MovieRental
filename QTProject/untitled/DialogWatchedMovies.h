#ifndef DIALOGWATCHEDMOVIES_H
#define DIALOGWATCHEDMOVIES_H
#pragma once
#include <QDialog>
#include "User.h"


namespace Ui {
    class DialogWatchedMovies;
}

class DialogWatchedMovies : public QDialog {
    Q_OBJECT

public:
    explicit DialogWatchedMovies(QWidget *parent = nullptr);
    ~DialogWatchedMovies();
    void init(User* user);
    void refresh();

private slots:
    void on_button_cancel_clicked();

    void on_button_rate_clicked();

    void on_button_refresh_clicked();

private:
    Ui::DialogWatchedMovies *ui;
    User* user;
};

#endif // DIALOGWATCHEDMOVIES_H
