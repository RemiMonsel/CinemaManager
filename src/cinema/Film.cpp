#include <iostream>
#include <iomanip>

#include "../../include/cinema/Film.h"

//Initialisation de la variable rating
uint8_t Film::rating = 0;
uint8_t Film::countOfRating = 0;

/**********************/
/**** constructors ****/
/**********************/

// default constructors
Film::Film(std::string movieTitle, uint8_t movieDuration, std::string filmGenre){
    title = movieTitle;
    duration = movieDuration;
    movieGenre = filmGenre;
}

Film::Film(std::string movieTitle, uint8_t movieDuration, std::string filmGenre, DateStruct movieReleaseDate,
           uint8_t movieMinimumAge, std::string myFilmDescription, std::string myFilmDirector, std::vector<std::string> myMainActors){
    title = movieTitle;
    duration = movieDuration;
    movieGenre = filmGenre;
    releaseDate = movieReleaseDate;
    minimumAge = movieMinimumAge;
    filmDescription = myFilmDescription;
    filmDirector = myFilmDirector;
    mainActors = myMainActors;
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

std::string Film::getReleaseDate()
{
    std::ostringstream dateToString;
    dateToString << std::setw(2) << std::setfill('0') << static_cast<int>(releaseDate.day) << "/"
                 << std::setw(2) << std::setfill('0') << static_cast<int>(releaseDate.month) << "/"
                 << releaseDate.year;
    return dateToString.str();
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

void Film::setReleaseDate(DateStruct myReleaseDate)
{
    releaseDate = myReleaseDate;
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
    std::cout << "The movie lasts " << static_cast<int>(duration) << " minutes" << std::endl;
    std::cout << title << "duration is : " << static_cast<int>(getDuration()) << " minutes" << std::endl;
    std::cout << title << " release date is : " << getReleaseDate() << std::endl;
    std::cout << "Minimum age for " << title << " is : " << static_cast<int>(minimumAge) << std::endl;
    std::cout << title << " description is : " << filmDescription << std::endl;
    std::cout << title << " director is : " << filmDirector << std::endl;
    if (mainActors.size() > 0)
    {
        mainActors.size() == 0 ? std::cout << "Main actors is : " : std::cout << "Main actors are : ";
        for(uint8_t i = 0; i < mainActors.size(); i++)
        {
            std::cout << mainActors.at(i) << std::endl;
        }
    }
    if (countOfRating > 0)
    {
        std::cout << "Average" << title << " rating is : " << rating << std::endl;
    }
    std::cout << std::endl;
}