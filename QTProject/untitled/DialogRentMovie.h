#ifndef DIALOGRENTMOVIE_H
#define DIALOGRENTMOVIE_H
#pragma once
#include <QDialog>
#include "Guest.h"
#include "Admin.h"
#include "User.h"


namespace Ui {
    class DialogRentMovie;
}

class DialogRentMovie : public QDialog {
    Q_OBJECT

public:
    explicit DialogRentMovie(QWidget *parent = nullptr);
    ~DialogRentMovie();
    void init(Guest* guest, Admin* admin, User* user);
    void refresh();

private slots:
    void on_button_cancel_clicked();

    void on_button_remove_clicked();

    void on_button_rent_clicked();

    void on_button_search_clicked();

    void on_button_refresh_clicked();

private:
    Ui::DialogRentMovie *ui;
    Guest* guest;
    Admin* admin;
    User* user;
    void search(QString searchText, int searchColumn);
};

#endif // DIALOGRENTMOVIE_H
