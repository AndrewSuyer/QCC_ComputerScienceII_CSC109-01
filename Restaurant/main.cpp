#include <iostream>

#include "Restaurant.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;

    Restaurant favoriteRestaurant;
    favoriteRestaurant.setName("Papa Jinos Pizzaria");
    favoriteRestaurant.setRating(4.9);
    favoriteRestaurant.print();

    return 0;
}
