#ifndef FILM_H
#define FILM_H

#include <cstdint> // declared to use uint8_t
#include <string>
#include <vector>

class Film {
    
    private :
        /**********************/
        /***** attributes *****/
        /**********************/
        std::string title;
        uint8_t duration;
        std::string movieGenre;
        struct releaseDate {
            uint8_t jour;
            uint8_t mois;
            uint16_t annee;
        };
        uint8_t minimumAge;
        std::string filmDescription;
        std::string filmDirector;
        std::vector<std::string> mainActors;
        uint8_t rating;
        uint16_t screeningRoomSeats;
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
        struct releaseDate getReleaseDate();
        uint8_t getMinimumAge();
        std::string getFilmDescription();
        std::string getFilmDirector();
        std::vector<std::string> getMainActors();
        uint8_t getRating();
        uint16_t getScreeningRoomSeats();
        uint16_t getReservedPlaces();

        //setters
        void setRating(uint8_t rating);

        // Other methods
        void reservePlaces(int8_t numOfPlaces);
        void cancelReservationOfPlaces(int8_t numOfPlacesToCancel);
        void showDetails();

};

#endif