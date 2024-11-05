#ifndef TICKET_H
#define TICKET_H

#include "Room.h"
#include "Film.h"

#include <cstdint> // declared to use uint8_t
#include <string>
#include <vector>

class Ticket {
    
    private :
        /**********************/
        /***** attributes *****/
        /**********************/
        static uint32_t ticketNum;
        uint32_t ticketId;
        Room* room;
        Film* movie;
        DateTimeStruct movieSchedule;
        DateTimeStruct purchaseDate;
        uint8_t seatNumber;
        float ticketPrice;
        
    public:
        /**************************/
        /****** constructors ******/
        /**************************/
        Ticket(Room* myRoom, Film* myMovieTitle, DateTimeStruct myMovieSchedule, DateTimeStruct myPurchaseDate, uint8_t mySeatNumber, float myTicketPrice);

        /*********************/
        /****** methods ******/
        /*********************/

        //getters
        uint32_t getTicketId();
        std::string getRoomName();
        std::string getMovieTitle();
        std::string getMovieSchedule();
        std::string getPurchaseDate();
        uint8_t getSeatPosition();
        float getTicketPrice();

        //setters
        void setTicketId(uint32_t myTicketId);
        void setMovieSchedule(DateTimeStruct myMovieSchedule);
        void setPurchaseDate(DateTimeStruct myPurchaseDate);
        void setTicketPrice(float myTicketPrice);

        //other methods
        void showDetails();
};

#endif