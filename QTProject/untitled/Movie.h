#ifndef MOVIE_H
#define MOVIE_H
#pragma once
#include <string>
using namespace std;


class Movie {
private:
    unsigned int id;
    string title;
    string category;
    string description;
    float rating;

public:
    Movie(unsigned int id, string title, string category, string description, float rating);
    ~Movie();
    unsigned int getId();
    string getTitle();
    string getCategory();
    string getDescription();
    float getRating();
};

#endif // MOVIE_H
