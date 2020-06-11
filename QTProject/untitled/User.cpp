#include "User.h"


User::User(unsigned int id, string login, string password, string name, string lastName) {
    this->id = id;
    this->login = login;
    this->password = password;
    this->name = name;
    this->lastName = lastName;
}

void User::rentMovie(unsigned int id) {
    for(auto &u : movieDatabase) {
        if(u->getId() == id) {
            rentedMovies.push_back(u);
            watchedMovies.push_back(u);
            break;
        }
    }
}

void User::returnMovie(unsigned int id) {
    Movie* rem = nullptr;

    for(auto &u : rentedMovies) {
        if(u->getId() == id) {
            rem = u;
            break;
        }
    }

    if(rem != nullptr) {
        rentedMovies.erase(std::remove(rentedMovies.begin(), rentedMovies.end(), rem), rentedMovies.end());
    }
}

void User::rateMovie(unsigned int id, float rate) {

}


unsigned int User::getId() {
    return id;
}

string User::getLogin() {
    return login;
}

string User::getPassword() {
    return password;
}

string User::getName() {
    return name;
}

string User::getLastName() {
    return lastName;
}

vector<Movie*>& User::getWatchedMovies() {
    return watchedMovies;
}

vector<Movie*>& User::getRentedMovies() {
    return rentedMovies;
}
