#ifndef FILM_H
#define FILM_H

#include <cstdint> // declared to use uint8_t
#include <string>
#include <vector>

struct Date {
    uint8_t day;
    uint8_t month;
    uint16_t year;
};

class Film {
    
    private :
        /**********************/
        /***** attributes *****/
        /**********************/
        std::string title;
        uint8_t duration;
        std::string movieGenre;
        Date releaseDate;
        uint8_t minimumAge;
        std::string filmDescription;
        std::string filmDirector;
        std::vector<std::string> mainActors;
        static uint8_t rating;
        static uint8_t countOfRating;
        uint16_t seatsAvailable;
        uint16_t reservedPlaces;

    public:
        //constructors
        Film(std::string movieTitle, uint8_t movieDuration, std::string movieGenre);
        Film(std::string movieTitle, uint8_t movieDuration, std::string filmGenre, Date movieReleaseDate,
           uint8_t movieMinimumAge = 0, std::string myFilmDescription = "No description available", 
           std::string myFilmDirector = "Unknown Director", std::vector<std::string> myMainActors = {});

        /*********************/
        /****** methods ******/
        /*********************/

        //getters
        std::string getTitle();
        uint8_t getDuration();
        std::string getMovieGenre();
        std::string getReleaseDate();
        uint8_t getMinimumAge();
        std::string getFilmDescription();
        std::string getFilmDirector();
        std::vector<std::string> getMainActors();
        uint8_t getRating();
        uint16_t getSeatsAvailable();
        uint16_t getReservedPlaces();

        //setters
        void setRating(uint8_t rating);
        void setReleaseDate(Date releaseDate);

        // Other methods
        void reservePlaces(int8_t numOfPlaces);
        void cancelReservationOfPlaces(int8_t numOfPlacesToCancel);
        void showDetails();

};

#endif