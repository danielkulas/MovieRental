#include "Authorization.h"


Authorization::Authorization() {
    nextId = loadUsers();
    nextAdminID = loadAdmins();
}

void Authorization::removeUser(unsigned int id) {
    User* rem = nullptr;

    for(auto &u : userDatabase) {
        if(u->getId() == id) {
            rem = u;
            break;
        }
    }

    if(rem != nullptr) {
        userDatabase.erase(std::remove(userDatabase.begin(), userDatabase.end(), rem), userDatabase.end());
        saveUserDatabaseToFile();
    }
}

void Authorization::saveUserDatabaseToFile() {
    ofstream userDatabaseTxt;
    userDatabaseTxt.open("users.txt", ios_base::out);

    if (!userDatabaseTxt) {
        return;
    }

    for(auto &u : userDatabase)
        userDatabaseTxt << u->getId() << " " << u->getLogin()<< " " << u->getPassword() << " " << u->getName() << " " << u->getLastName() << "\n";
    userDatabaseTxt.close();
}


unsigned int Authorization::loadUsers() {
    unsigned int counter = 0;

    ifstream userDataBaseTxt;
    userDataBaseTxt.open("users.txt");
    if (!userDataBaseTxt) {
        return 0;
    }

    User* userTemp;
    unsigned int id;
    string login;
    string password;
    string name;
    string lastName;
    while(userDataBaseTxt >> id) { //Do momentu natkniecia sie na ostatni wiersz
        userDataBaseTxt >> login;
        userDataBaseTxt >> password;
        userDataBaseTxt >> name;
        userDataBaseTxt >> lastName;

        userTemp = new User(id, login, password, name, lastName);
        userDatabase.push_back(userTemp);
        counter++;
    }

    userDataBaseTxt.close();
    return counter;
}

User* Authorization::login(string login, string password) {
    for(User* u : userDatabase) {
        if(u->getLogin() == login && u->getPassword() == password)
            return u;
    }

    return nullptr;
}

unsigned int Authorization::getNextId() {
    return nextId;
}

void Authorization::registerUser(string login, string password, string name, string lastName) {
    ofstream userDatabaseTxt;
    userDatabaseTxt.open("users.txt", ios_base::app);

    if (!userDatabaseTxt) {
        return;
    }

    userDatabaseTxt << nextId << " " << login << " " << password << " " << name << " " << lastName << "\n";
    User* user = new User(nextId, login, password, name, lastName);
    userDatabase.push_back(user);

    nextId++;
    userDatabaseTxt.close();
}



unsigned int Authorization::loadAdmins() {
    unsigned int counter = 0;

    ifstream adminDataBaseTxt;
    adminDataBaseTxt.open("admins.txt");
    if (!adminDataBaseTxt) {
        return 0;
    }

    Admin* adminTemp;
    unsigned int id;
    string login;
    string password;
    while(adminDataBaseTxt >> id) { //Do momentu natkniecia sie na ostatni wiersz
        adminDataBaseTxt >> login;
        adminDataBaseTxt >> password;

        adminTemp = new Admin(this, id, login, password);
        adminDatabase.push_back(adminTemp);
        counter++;
    }

    adminDataBaseTxt.close();
    return counter;
}

Admin* Authorization::loginAdmin(string login, string password) {
    for(Admin* u : adminDatabase) {
        if(u->getLogin() == login && u->getPassword() == password)
            return u;
    }

    return nullptr;
}

unsigned int Authorization::getNextAdminId() {
    return nextAdminID;
}

void Authorization::registerAdmin(string login, string password) {
    ofstream adminDatabaseTxt;
    adminDatabaseTxt.open("admins.txt", ios_base::app);

    if (!adminDatabaseTxt) {
        return;
    }

    adminDatabaseTxt << nextAdminID << " " << login << " " << password << "\n";
    Admin* admin = new Admin(this, nextAdminID, login, password);
    adminDatabase.push_back(admin);

    nextAdminID++;
    adminDatabaseTxt.close();
}


vector<User*>& Authorization::getUserDatabase() {
   return userDatabase;
}
