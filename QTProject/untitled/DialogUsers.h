#ifndef DIALOGUSERS_H
#define DIALOGUSERS_H
#pragma once
#include <QDialog>
#include "Admin.h"


namespace Ui {
    class DialogUsers;
}

class DialogUsers : public QDialog {
    Q_OBJECT

public:
    explicit DialogUsers(QWidget *parent = nullptr);
    ~DialogUsers();
    void init(Admin* admin);
    void refresh();

private slots:
    void on_button_close_clicked();

    void on_button_remove_clicked();

    void on_button_refresh_clicked();

private:
    Admin* admin;
    Ui::DialogUsers *ui;
};

#endif // DIALOGUSERS_H
