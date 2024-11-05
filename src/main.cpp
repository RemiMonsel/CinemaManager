#include <iostream>
#include "../commonLibrary/GenericLib.h"
#include "../include/cinema/Film.h"
#include "../include/cinema/Room.h"
#include "../include/cinema/Client.h"
#include "../include/cinema/Ticket.h"

int main()
{
    /**********************************/
    /***** Creation of new movies *****/
    /**********************************/
    Film spidermanMovie("Spider-Man : No Way Home", 150, "Action");
    Film inceptionMovie("Inception", 148, "Science-Fiction");
    Film harryPotterMovie("Harry Potter and the Philosopher's Stone", 152, "Fantasy", {5U,12U,2001U});

    spidermanMovie.setReleaseDate({15U, 12U, 2021U});

    std::cout << "Movie title is : " << spidermanMovie.getTitle() << std::endl;
    std::cout << "Movie duration is : " << static_cast<int>(spidermanMovie.getDuration()) << std::endl;
    std::cout << "Movie genre is : " << spidermanMovie.getMovieGenre() << std::endl;
    std::cout << "Movie release date is : " << spidermanMovie.getReleaseDate() << std::endl <<std::endl;

    harryPotterMovie.showDetails();

    /*******************************************/
    /***** Creation of new screening rooms *****/
    /*******************************************/
    Room roomA(1U, "RoomA", 150U);

    roomA.showDetails();

    roomA.setActualMovie(spidermanMovie.getTitle());
    roomA.showDetails();

    /**********************************/
    /***** Creation of new client *****/
    /**********************************/
    Client client1("Dupont","jean.dupont@hotmail.com", {12,10,1950});
    client1.showDetails();

    /**********************************/
    /***** Creation of new ticket *****/
    /**********************************/
    Ticket ticket1(&roomA, &spidermanMovie, {10, 9, 2024, 10, 50}, {3, 9, 2024, 19, 48}, 22U, 12.5F);
    ticket1.showDetails();

    Ticket ticket2(&roomA, &spidermanMovie, {10, 9, 2024, 10, 50}, {2, 9, 2024, 16, 12}, 22U, 12.5F);
    ticket2.showDetails();

    return 0;
}