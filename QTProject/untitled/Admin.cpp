#include "Admin.h"


Admin::Admin(Authorization* authorization, unsigned int id, string login, string password) {
    this->authorization = authorization;
    this->id = id;
    this->login = login;
    this->password = password;
}

void Admin::addMovie(Movie *movie) {
    movieDatabase.push_back(movie);
    nextId++;
}

void Admin::addMovie(unsigned int id, string title, string category, string description, float rating) {
    Movie* movie = new Movie(id, title, category, description, rating);
    addMovie(movie);
}

void Admin::removeMovie(unsigned int id) {
    Movie* rem = nullptr;

    for(auto &m : movieDatabase) {
        if(m->getId() == id) {
            rem = m;
            break;
        }
    }

    if(rem != nullptr) {
        movieDatabase.erase(std::remove(movieDatabase.begin(), movieDatabase.end(), rem), movieDatabase.end());
        saveDatabaseToFile();
    }
}

void Admin::saveDatabaseToFile() {
    ofstream movieDatabaseTxt;
    movieDatabaseTxt.open("movies.txt", ios_base::out);

    if (!movieDatabaseTxt) {
        return;
    }

    for(auto &m : movieDatabase) {
        movieDatabaseTxt << m->getId() << " " << m->getTitle() << " " << m->getCategory() << " " << m->getDescription() << " " << m->getRating() << "\n";
    }
    movieDatabaseTxt.close();
}

void Admin::removeUser(unsigned int id) {
    authorization->removeUser(id);
}

string Admin::getLogin() {
    return login;
}

string Admin::getPassword() {
    return password;
}

vector<User*>& Admin::getUserDatabase() {
    return authorization->getUserDatabase();
}
