#include <iostream>
#include <iomanip>

#include "../../include/cinema/Ticket.h"

uint32_t Ticket::ticketNum = 1U;

/**************************/
/****** constructors ******/
/**************************/
Ticket::Ticket(Room* myRoom, Film* myMovieTitle, DateTimeStruct myMovieSchedule, DateTimeStruct myPurchaseDate, uint8_t mySeatNumber, float myTicketPrice)
{
    ticketNum++;
    ticketId = ticketNum;
    room = myRoom;
    movie = myMovieTitle;
    movieSchedule = myMovieSchedule;
    purchaseDate = myPurchaseDate;
    int row = static_cast<int>(mySeatNumber/19U);
    int column = static_cast<int>(mySeatNumber%19U - 1);
    if ((row < 10) && (column < 20))
    {
        if(room->isSeatAvailable(room->seatPosition[row][column]))
        {
            seatNumber = mySeatNumber;
            room->seatPosition[row][column] = false;
        }
        else
        {
            seatNumber = 255U;
            std::cout << "Please choose an available seat" << std::endl;
        }
    }
    else
    {
        seatNumber = 255U;
        std::cout << "Please choose a valid seat" << std::endl;
    }
    ticketPrice = myTicketPrice;
}

/*********************/
/****** methods ******/
/*********************/

//getters
uint32_t Ticket::getTicketId()
{
    return ticketId;
}

std::string Ticket::getRoomName()
{
    return room->getRoomName();
}

std::string Ticket::getMovieTitle()
{
    return movie->getTitle();
}

uint8_t Ticket::getSeatPosition()
{
    return seatNumber;
}

std::string Ticket::getMovieSchedule()
{
    std::ostringstream dateToString;
    dateToString << std::setw(2) << std::setfill('0') << static_cast<int>(movieSchedule.day) << "/"
                 << std::setw(2) << std::setfill('0') << static_cast<int>(movieSchedule.month) << "/"
                 << movieSchedule.year << " "
                 << std::setw(2) << std::setfill('0') << static_cast<int>(movieSchedule.hour) << ":"
                 << std::setw(2) << std::setfill('0') << static_cast<int>(movieSchedule.minute);
    return dateToString.str();
}

std::string Ticket::getPurchaseDate()
{
    std::ostringstream dateToString;
    dateToString << std::setw(2) << std::setfill('0') << static_cast<int>(movieSchedule.day) << "/"
                 << std::setw(2) << std::setfill('0') << static_cast<int>(movieSchedule.month) << "/"
                 << movieSchedule.year;
    return dateToString.str();
}

float Ticket::getTicketPrice()
{
    return ticketPrice;
}

//setters
void Ticket::setTicketId(uint32_t myTicketId)
{
    ticketId = myTicketId;
}

void Ticket::setMovieSchedule(DateTimeStruct myMovieSchedule)
{
    movieSchedule = myMovieSchedule;
}
void Ticket::setPurchaseDate(DateTimeStruct myPurchaseDate)
{
    purchaseDate = myPurchaseDate;
}

void Ticket::setTicketPrice(float myTicketPrice)
{
    ticketPrice = myTicketPrice;
}

//other methods
void Ticket::showDetails()
{
    std::cout << "Ticket ID is : " << static_cast<int>(ticketId) << std::endl;
    std::cout << "The room where this movie is displayed is : " << getRoomName() << std::endl;
    std::cout << "The movie is : " << getMovieTitle() << std::endl;
    std::cout << "The movie is scheduled is : " << getMovieSchedule() << std::endl;
    std::cout << "The ticket has been purchased the : " << getPurchaseDate() << std::endl;
    std::cout << "The ticket price is : " << ticketPrice << std::endl;
    std::cout << "The seat reserved is : " << static_cast<int>(getSeatPosition()) << std::endl;

    std::cout << std::endl;
}