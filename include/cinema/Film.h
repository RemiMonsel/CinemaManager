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
        Film();
        //destructors
        ~Film();

        /*********************/
        /****** methods ******/
        /*********************/

        //getters
        std::string getTitle();
        uint8_t getDuration();
        std::string getMovieGenre();
        Date getReleaseDate();
        uint8_t getMinimumAge();
        std::string getFilmDescription();
        std::string getFilmDirector();
        std::vector<std::string> getMainActors();
        uint8_t getRating();
        uint16_t getSeatsAvailable();
        uint16_t getReservedPlaces();

        //setters
        void setRating(uint8_t rating);

        // Other methods
        void reservePlaces(int8_t numOfPlaces);
        void cancelReservationOfPlaces(int8_t numOfPlacesToCancel);
        void showDetails();

};

#endif