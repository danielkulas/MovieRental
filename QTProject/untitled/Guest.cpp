#include "Guest.h"


Guest::Guest() {
    nextId = loadMovies();
}

unsigned int Guest::loadMovies() {
    unsigned int counter = 0;

    ifstream movieDatabaseTxt;
    movieDatabaseTxt.open("movies.txt");
    if (!movieDatabaseTxt) {
        return 0;
    }

    Movie* movieTemp;
    unsigned int id;
    string title;
    string category;
    string description;
    float rating;
    while(movieDatabaseTxt >> id) { //Do momentu natkniecia sie na ostatni wiersz
        movieDatabaseTxt >> title;
        movieDatabaseTxt >> category;
        movieDatabaseTxt >> description;
        movieDatabaseTxt >> rating;

        movieTemp = new Movie(id, title, category, description, rating);
        movieDatabase.push_back(movieTemp);
        counter++;
    }

    movieDatabaseTxt.close();
    return counter;
}

unsigned int Guest::getNextId() {
    return nextId;
}

vector<Movie*>& Guest::getMovieDatabase() {
    return movieDatabase;
}
