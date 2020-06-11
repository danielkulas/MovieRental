#include "Movie.h"


Movie::Movie(unsigned int id, string title, string category, string description, float rating) {
    this->id = id;
    this->title = title;
    this->category = category;
    this->description = description;
    this->rating = rating;
}


//Getters, setters
unsigned int Movie::getId() {
    return id;
}

string Movie::getTitle() {
    return title;
}

string Movie::getCategory() {
    return category;
}

string Movie::getDescription() {
    return description;
}

float Movie::getRating() {
    return rating;
}
