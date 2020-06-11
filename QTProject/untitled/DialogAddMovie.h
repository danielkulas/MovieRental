#ifndef DIALOGADDMOVIE_H
#define DIALOGADDMOVIE_H
#pragma once
#include <QDialog>
#include <fstream>
#include "Admin.h"
using namespace std;


namespace Ui {
    class DialogAddMovie;
}

class DialogAddMovie : public QDialog {
    Q_OBJECT

public:
    explicit DialogAddMovie(QWidget *parent = nullptr);
    ~DialogAddMovie();
    void init(Admin* user);

private slots:
    void on_button_cancel_clicked();

    void on_button_add_clicked();

private:
    Admin* user;
    Ui::DialogAddMovie *ui;
    void addMovie(QString title, QString Category, QString Description);
};

#endif // DIALOGADDMOVIE_H
