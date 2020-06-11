#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H
#pragma once
#include "User.h"
#include "Admin.h"
#include <vector>


class Authorization {
private:
    friend class Admin;
    std::vector<User*> userDatabase;
    std::vector<class Admin*> adminDatabase;
    unsigned int nextId;
    unsigned int nextAdminID;
    void removeUser(unsigned int id);
    void saveUserDatabaseToFile();
    vector<User*>& getUserDatabase();

public:
    Authorization();
    unsigned int loadUsers();
    unsigned int getNextId();
    User* login(string login, string password);
    void registerUser(string login, string password, string name, string lastName);

    unsigned int loadAdmins();
    unsigned int getNextAdminId();
    Admin* loginAdmin(string login, string password);
    void registerAdmin(string login, string password);
};

#endif // AUTHORIZATION_H
