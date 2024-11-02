#include <iostream>

#include "../../include/cinema/Film.h"

//Initialisation de la variable rating
uint8_t Film::rating = 0;
uint8_t Film::countOfRating = 0;

/**********************/
/**** constructors ****/
/**********************/

// default constructors
Film::Film()
{

}

/*********************/
/****** methods ******/
/*********************/

//getters
std::string Film::getTitle()
{
    return title;
}

uint8_t Film::getDuration()
{
    return duration;
}

std::string Film::getMovieGenre()
{
    return movieGenre;
}

Date Film::getReleaseDate()
{
    return Film::releaseDate;
}

uint8_t Film::getMinimumAge()
{
    return minimumAge;
}

std::string Film::getFilmDescription()
{
    return filmDescription;
}

std::string Film::getFilmDirector()
{
    return filmDirector;
}

std::vector<std::string> Film::getMainActors()
{
    return mainActors;
}

uint8_t Film::getRating()
{
    return rating;
}

uint16_t Film::getSeatsAvailable()
{
    return seatsAvailable;
}

uint16_t Film::getReservedPlaces()
{
    return reservedPlaces;
}

//setters
void Film::setRating(uint8_t myRating)
{
    countOfRating++;
    rating = (rating + myRating)/ countOfRating;
}

// Other methods
void Film::reservePlaces(int8_t numOfPlaces)
{
    if (numOfPlaces < seatsAvailable)
    {
        seatsAvailable -= numOfPlaces;
    }
}
void Film::cancelReservationOfPlaces(int8_t numOfPlacesToCancel)
{
    seatsAvailable += numOfPlacesToCancel;
}

void Film::showDetails()
{
    std::cout << "Movie title is : " << title << std::endl;
    std::cout << "The movie lasts " << duration << " minutes" << std::endl;
    std::cout << "Movie genre is : " << movieGenre << std::endl;
    std::cout << "Release date is : " << releaseDate.day << "/" << releaseDate.month << "/" << releaseDate.year << std::endl;
    std::cout << "Minimum age for this movie is : " << minimumAge << std::endl;
    std::cout << "The movie description is : " << filmDescription << std::endl;
    std::cout << "Film director is : " << filmDirector << std::endl;
    mainActors.size() == 0 ? std::cout << "Main actors is : " : std::cout << "Main actors are : ";
    for(uint8_t i = 0; i < mainActors.size(); i++)
    {
        std::cout << mainActors.at(i) << std::endl;
    }
    std::cout << "Average movie rating is : " << rating << std::endl;
}