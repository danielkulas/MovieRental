#ifndef GUEST_H
#define GUEST_H
#pragma once
#include <Movie.h>
#include <vector>
#include <fstream>
using namespace std;


class Guest {
private:
    unsigned int loadMovies();

protected:
    std::vector<Movie*> movieDatabase;
    unsigned int nextId;

public:
    Guest();
    unsigned int getNextId();
    vector<Movie*>& getMovieDatabase();
};

#endif // GUEST_H
