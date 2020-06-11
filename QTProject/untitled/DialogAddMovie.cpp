#include "DialogAddMovie.h"
#include "ui_DialogAddMovie.h"


DialogAddMovie::DialogAddMovie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddMovie)
    {
        ui->setupUi(this);
    }

DialogAddMovie::~DialogAddMovie() {
    delete ui;
}

void DialogAddMovie::init(Admin *user) {
    this->user = user;
}

void DialogAddMovie::on_button_cancel_clicked() {
    close();
}

void DialogAddMovie::on_button_add_clicked() {
    addMovie(ui->lineEdit_title->text(), ui->lineEdit_category->text(), ui->lineEdit_description->text());
    close();
}

void DialogAddMovie::addMovie(QString title, QString category, QString description) {
    ofstream userDatabase;
    userDatabase.open("movies.txt", ios_base::app);

    if (!userDatabase) {
        close();
    }

    unsigned int id = user->getNextId();
    userDatabase << id << " " << title.toUtf8().constData() << " " << category.toUtf8().constData() << " " <<
                    description.toUtf8().constData() << " " << "0.0" << "\n";

    user->addMovie(id, title.toUtf8().constData(), category.toUtf8().constData(), description.toUtf8().constData(), 0.0);
    userDatabase.close();
}
