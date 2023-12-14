/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INSTRUMENTINFORMATION_TEMPLATES_ELECTRICSTRINSTRUMENT_H
#define INSTRUMENTINFORMATION_TEMPLATES_ELECTRICSTRINSTRUMENT_H

#include "StringInstrument.h"

/**
 * Electric String Instrument class
 * @tparam T - Year Build: int, string
 * @tparam R - Cost: int, double
 * @tparam S - Id: int, double, string
 * @tparam K - IsBowed: bool, int, string
 * @tparam C - Current: int, double, string
 */
template<typename T, typename R, typename S, typename K, typename C>
class ElectricStrInstrument : public StringInstrument<T, R, S, K>
{
    C current;      // int, double, string

public:

    ElectricStrInstrument(std::string name, std::string manufacturer, T year, R cost, S id, int strings, int frets, K bowed, C curr);

    void SetCurrent(C c);
    C GetCurrent() const;

};


template<typename T, typename R, typename S, typename K, typename C>
ElectricStrInstrument<T, R, S, K, C>::ElectricStrInstrument(std::string name, std::string manufacturer, T year, R cost,
                                                            S id, int strings, int frets, K bowed, C curr) :
    StringInstrument<T, R, S, K>(name, manufacturer, year, cost, id, strings, frets, bowed), current(curr)
{}


template<typename T, typename R, typename S, typename K, typename C>
void ElectricStrInstrument<T, R, S, K, C>::SetCurrent(C c)
{
    current = c;
}


template<typename T, typename R, typename S, typename K, typename C>
C ElectricStrInstrument<T, R, S, K, C>::GetCurrent() const
{
    return current;
}


#endif //INSTRUMENTINFORMATION_TEMPLATES_ELECTRICSTRINSTRUMENT_H
