/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.17 Plant information
 */


#include "Flower.h"
#include <iostream>


void Flower::SetPlantType(bool userIsAnnual) {
    isAnnual = userIsAnnual;
}

bool Flower::GetPlantType() const {
    return isAnnual;
}

void Flower::SetColorOfFlowers(const std::string& userColorOfFlowers) {
    colorOfFlowers = userColorOfFlowers;
}

const std::string& Flower::GetColorOfFlowers() const {
    return colorOfFlowers;
}

void Flower::PrintInfo() const {
    std::cout << "   Plant name: " << plantName << std::endl;
    std::cout << "   Cost: " << plantCost << std::endl;
    std::cout << "   Annual: " << std::boolalpha << isAnnual << std::endl;
    std::cout << "   Color of flowers: " << colorOfFlowers << std::endl;
}


bool Flower::operator==(const Flower &f) const
{
    return Plant::operator==(f) &&
            isAnnual == f.isAnnual &&
            colorOfFlowers == f.colorOfFlowers;
}


std::ostream &operator<<(std::ostream &out, const Flower &f)
{
    out << "   Plant name: " << f.plantName << std::endl;
    out << "   Cost: " << f.plantCost << std::endl;
    out << "   Annual: " << std::boolalpha << f.isAnnual << std::endl;
    out << "   Color of flowers: " << f.colorOfFlowers << std::endl;
}
