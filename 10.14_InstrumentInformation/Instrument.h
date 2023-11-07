/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.14 Instrument information
 */


#ifndef INC_10_14_INSTRUMENTINFORMATION_INSTRUMENT_H
#define INC_10_14_INSTRUMENTINFORMATION_INSTRUMENT_H

#include <string>

class Instrument
{
protected:

    std::string instrumentName;
    std::string instrumentManufacturer;
    int yearBuilt;
    int cost;

public:

    void SetName(const std::string& userName);
    const std::string& GetName();

    void SetManufacturer(const std::string& userManufacturer);
    const std::string& GetManufacturer();

    void SetYearBuilt(int userYearBuilt);
    int GetYearBuilt();

    void SetCost(int userCost);
    int GetCost();

    void PrintInfo();
};


#endif // INC_10_14_INSTRUMENTINFORMATION_INSTRUMENT_H
