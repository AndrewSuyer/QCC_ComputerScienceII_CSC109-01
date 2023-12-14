/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INSTRUMENTINFORMATION_TEMPLATES_INSTRUMENT_H
#define INSTRUMENTINFORMATION_TEMPLATES_INSTRUMENT_H

#include <string>
#include <iostream>

/**
 * Instrument class
 * @tparam T - Year Build: int, string
 * @tparam R - Cost: int, double
 * @tparam S - Id: int, double, string
 */
template<typename T, typename R, typename S>
class Instrument
{
protected:

    std::string instrumentName;
    std::string instrumentManufacturer;
    T yearBuilt;      // int, string
    R cost;           // int, double
    S id;             // int, double, string

public:

    Instrument(std::string name, std::string manufacturer, T year, R cost, S id);

    void SetName(const std::string& userName);
    const std::string& GetName();

    void SetManufacturer(const std::string& userManufacturer);
    const std::string& GetManufacturer();

    void SetYearBuilt(T userYearBuilt);
    T GetYearBuilt();

    void SetCost(R userCost);
    R GetCost();

    void SetId(S userId);
    S GetId() const;

    void PrintInfo();

    template<typename T1, typename R1, typename S1>
    friend std::ostream& operator<<(std::ostream& out, const Instrument& i);
};


template<typename T, typename R, typename S>
Instrument<T, R, S>::Instrument(std::string name, std::string manufacturer, T year, R cost, S id) :
    instrumentName(std::move(name)), instrumentManufacturer(std::move(manufacturer)), yearBuilt(year), cost(cost), id(id)
{}


template<typename T, typename R, typename S>
void Instrument<T, R, S>::SetName(const std::string &userName)
{
    instrumentName = userName;
}


template<typename T, typename R, typename S>
const std::string &Instrument<T, R, S>::GetName()
{
    return instrumentName;
}


template<typename T, typename R, typename S>
void Instrument<T, R, S>::SetManufacturer(const std::string &userManufacturer)
{
    instrumentManufacturer = userManufacturer;
}


template<typename T, typename R, typename S>
const std::string &Instrument<T, R, S>::GetManufacturer()
{
    return instrumentManufacturer;
}


template<typename T, typename R, typename S>
void Instrument<T, R, S>::SetYearBuilt(T userYearBuilt)
{
    yearBuilt = userYearBuilt;
}


template<typename T, typename R, typename S>
T Instrument<T, R, S>::GetYearBuilt()
{
    return yearBuilt;
}


template<typename T, typename R, typename S>
void Instrument<T, R, S>::SetCost(R userCost)
{
    cost = userCost;
}


template<typename T, typename R, typename S>
R Instrument<T, R, S>::GetCost()
{
    return cost;
}


template<typename T, typename R, typename S>
S Instrument<T, R, S>::GetId() const
{
    return id;
}


template<typename T, typename R, typename S>
void Instrument<T, R, S>::SetId(S userId)
{
    id = userId;
}


template<typename T, typename R, typename S>
void Instrument<T, R, S>::PrintInfo()
{
    std::cout << "Instrument Information: " << std::endl;
    std::cout << "   Name: " << instrumentName << std::endl;
    std::cout << "   Manufacturer: " << instrumentManufacturer << std::endl;
    std::cout << "   Year built: " << yearBuilt << std::endl;
    std::cout << "   Cost: $" << cost << std::endl;
}


template<typename T1, typename R1, typename S1>
std::ostream &operator<<(std::ostream &out, const Instrument<T1, R1, S1> &i)
{
    out << "Instrument Information: " << std::endl;
    out << "   Name: " << i.instrumentName << std::endl;
    out << "   Manufacturer: " << i.instrumentManufacturer << std::endl;
    out << "   Year built: " << i.yearBuilt << std::endl;
    out << "   Cost: $" << i.cost << std::endl;
}


#endif //INSTRUMENTINFORMATION_TEMPLATES_INSTRUMENT_H
