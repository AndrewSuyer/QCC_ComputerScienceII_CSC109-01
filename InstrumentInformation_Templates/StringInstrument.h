/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INSTRUMENTINFORMATION_TEMPLATES_STRINGINSTRUMENT_H
#define INSTRUMENTINFORMATION_TEMPLATES_STRINGINSTRUMENT_H

#include "Instrument.h"

/**
 * String Instrument class
 * @tparam T - Year Build: int, string
 * @tparam R - Cost: int, double
 * @tparam S - Id: int, double, string
 * @tparam K - IsBowed: bool, int, string
 */
template<typename T, typename R, typename S, typename K>
class StringInstrument : public Instrument<T, R, S>
{
    int numStrings;
    int numFrets;
    K isBowed;      // bool, int, string

public:

    StringInstrument(std::string name, std::string manufacturer, T year, R cost, S id, int strings, int frets, K bowed);

    void SetNumOfStrings(int num);
    int GetNumOfStrings() const;

    void SetNumOfFrets(int num);
    int GetNumOfFrets() const;

    void SetIsBowed(K bowed);
    K GetIsBowed() const;


};


template<typename T, typename R, typename S, typename K>
StringInstrument<T, R, S, K>::StringInstrument(std::string name, std::string manufacturer, T year, R cost, S id,
                                               int strings, int frets, K bowed) :
    Instrument<T, R, S>(name, manufacturer, year, cost, id), numStrings(strings), numFrets(frets), isBowed(bowed)
{}


template<typename T, typename R, typename S, typename K>
void StringInstrument<T, R, S, K>::SetNumOfStrings(int num)
{
    numStrings = num;
}


template<typename T, typename R, typename S, typename K>
int StringInstrument<T, R, S, K>::GetNumOfStrings() const
{
    return numStrings;
}


template<typename T, typename R, typename S, typename K>
void StringInstrument<T, R, S, K>::SetNumOfFrets(int num)
{
    numFrets = num;
}


template<typename T, typename R, typename S, typename K>
int StringInstrument<T, R, S, K>::GetNumOfFrets() const
{
    return numFrets;
}


template<typename T, typename R, typename S, typename K>
void StringInstrument<T, R, S, K>::SetIsBowed(K bowed)
{
    isBowed = bowed;
}


template<typename T, typename R, typename S, typename K>
K StringInstrument<T, R, S, K>::GetIsBowed() const
{
    return isBowed;
}

#endif //INSTRUMENTINFORMATION_TEMPLATES_STRINGINSTRUMENT_H
