#ifndef ADMIN_H
#define ADMIN_H
#pragma once
#include "Guest.h"
#include "Authorization.h"
#include "algorithm"


class Admin : public Guest {
private:
    class Authorization* authorization;
    unsigned int id;
    string login;
    string password;
    void saveDatabaseToFile();

public:
    Admin(class Authorization* authorization, unsigned int id, string login, string password);
    void addMovie(Movie* movie);
    void addMovie(unsigned int id, string title, string category, string description, float rating);
    void removeMovie(unsigned int id);
    void removeUser(unsigned int id);
    string getLogin();
    string getPassword();
    vector<User*>& getUserDatabase();
};

#endif // ADMIN_H
