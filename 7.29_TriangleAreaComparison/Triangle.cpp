/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.29 Triangle area comparison
 */

#include "Triangle.h"

#include <iostream>
#include <iomanip>
#include <cmath>

void Triangle::SetBase(double userBase) {
    base = userBase;
}

void Triangle::SetHeight(double userHeight) {
    height = userHeight;
}

double Triangle::GetArea() const {
    return 0.5 * base * height;
}

void Triangle::PrintInfo() const
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Base: " << base << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Area: " << GetArea() << std::endl;
}
