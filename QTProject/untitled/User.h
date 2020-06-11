#ifndef USER_H
#define USER_H
#pragma once
#include "Guest.h"
#include <vector>
#include <algorithm>


class User : public Guest {
private:
    unsigned int id;
    string login;
    string password;
    string name;
    string lastName;
    std::vector<Movie*> watchedMovies;
    std::vector<Movie*> rentedMovies;

public:
    User(unsigned int id, string login, string password, string name, string lastName);
    unsigned int getId();
    string getLogin();
    string getPassword();
    string getName();
    string getLastName();
    void rentMovie(unsigned int id);
    void returnMovie(unsigned int id);
    void rateMovie(unsigned int id, float rate);
    vector<Movie*>& getWatchedMovies();
    vector<Movie*>& getRentedMovies();
};

#endif // USER_H
