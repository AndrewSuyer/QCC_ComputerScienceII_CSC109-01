/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 12.10 Zip code and population
 */


#ifndef INC_12_10_ZIPCODEANDPOPULATION_STATEPAIR_H
#define INC_12_10_ZIPCODEANDPOPULATION_STATEPAIR_H


#include <iostream>

template<typename T1, typename T2>
class StatePair
{
    T1 key;
    T2 value;

public:

    StatePair() = default;
    StatePair(T1 userKey, T2 userValue);


    void SetKey(const T1& key);
    T1 GetKey() const;

    void SetValue(const T2& value);
    T2 GetValue() const;


    void PrintInfo() const;
};


template<typename T1, typename T2>
StatePair<T1, T2>::StatePair(T1 userKey, T2 userValue) :
        key(userKey), value(userValue)
{}


template<typename T1, typename T2>
void StatePair<T1, T2>::SetKey(const T1 &aKey)
{
    key = aKey;
}


template<typename T1, typename T2>
T1 StatePair<T1, T2>::GetKey() const
{
    return key;
}


template<typename T1, typename T2>
void StatePair<T1, T2>::SetValue(const T2 &aValue)
{
    value = aValue;
}


template<typename T1, typename T2>
T2 StatePair<T1, T2>::GetValue() const
{
    return value;
}


template<typename T1, typename T2>
void StatePair<T1, T2>::PrintInfo() const
{
    std::cout << key << ": " << value << '\n';
}

#endif // INC_12_10_ZIPCODEANDPOPULATION_STATEPAIR_H
