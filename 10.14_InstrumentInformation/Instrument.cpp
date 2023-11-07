/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.14 Instrument information
 */


#include <iostream>
#include "Instrument.h"


void Instrument::SetName(const std::string &userName)
{
    instrumentName = userName;
}


const std::string &Instrument::GetName()
{
    return instrumentName;
}


void Instrument::SetManufacturer(const std::string &userManufacturer)
{
    instrumentManufacturer = userManufacturer;
}


const std::string &Instrument::GetManufacturer()
{
    return instrumentManufacturer;
}


void Instrument::SetYearBuilt(int userYearBuilt)
{
    yearBuilt = userYearBuilt;
}


int Instrument::GetYearBuilt()
{
    return yearBuilt;
}


void Instrument::SetCost(int userCost)
{
    cost = userCost;
}


int Instrument::GetCost()
{
    return cost;
}


void Instrument::PrintInfo()
{
    std::cout << "Instrument Information: " << std::endl;
    std::cout << "   Name: " << instrumentName << std::endl;
    std::cout << "   Manufacturer: " << instrumentManufacturer << std::endl;
    std::cout << "   Year built: " << yearBuilt << std::endl;
    std::cout << "   Cost: " << cost << std::endl;
}
