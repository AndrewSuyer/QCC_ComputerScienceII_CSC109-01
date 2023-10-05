#include <iostream>
#include "TwoDArray.h"

/*
 * Passing by pointer creates a copy of the address when passing into the function.
 * The size of the pointer will always be 64 bits on a 64 bit OS
 */


int main()
{
    double arr[6][7] = { {11, 2, 3, 4, 5, 6, 7},
                         {10, 9, 8, 7, 6, 5, 4},
                         {12, 11, 11, 11, 11, 31, 11},
                         {5, 5, 5, 5, 5, 5, 5},
                         {12, 3, 4, 9, 8, 7, 6},
                         {12, 3, 4, 9, 8, 7, 6} };

    std::cout << to_string((double*) arr, 6, 7) << std::endl;

    return 0;
}
