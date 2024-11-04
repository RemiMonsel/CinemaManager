#include <iostream>
#include "../include/cinema/Film.h"

int main()
{
    //Creation of new movies
    Film spidermanMovie("Spider-Man : No Way Home", 150, "Action");
    Film inceptionMovie("Inception", 148, "Science-Fiction");
    Film harryPotterMovie("Harry Potter and the Philosopher's Stone", 152, "Fantasy", {5U,12U,2001U});

    spidermanMovie.setReleaseDate({15U, 12U, 2021U});

    std::cout << "Movie title is : " << spidermanMovie.getTitle() << std::endl;
    std::cout << "Movie duration is : " << static_cast<int>(spidermanMovie.getDuration()) << std::endl;
    std::cout << "Movie genre is : " << spidermanMovie.getMovieGenre() << std::endl;
    std::cout << "Movie release date is : " << spidermanMovie.getReleaseDate() << std::endl <<std::endl;

    harryPotterMovie.showDetails();

    return 0;
}