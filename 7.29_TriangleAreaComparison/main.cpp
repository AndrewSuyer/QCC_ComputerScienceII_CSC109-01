/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.29 Triangle area comparison
 */

#include <iostream>

#include "Triangle.h"

int main()
{
    Triangle triangle1;
    Triangle triangle2;

    // User input trackers:
    double base;
    double height;

//    cout << "Enter base and height value for triangle 1 (on seperate lines):" << endl;
    std::cin >> base;
    std::cin >> height;

    triangle1.SetBase(base);
    triangle1.SetHeight(height);

//    cout << "Enter base and height value for triangle 2 (on seperate lines):" << endl;
    std::cin >> base;
    std::cin >> height;

    triangle2.SetBase(base);
    triangle2.SetHeight(height);

    std::cout << "Triangle with smaller area:" << std::endl;

    if( triangle1.GetArea() < triangle2.GetArea() )
        triangle1.PrintInfo();
    else
        triangle2.PrintInfo();

    return 0;
}
