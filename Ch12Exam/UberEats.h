/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 Exam
 */


#ifndef CH12EXAM_UBEREATS_H
#define CH12EXAM_UBEREATS_H

#include "Uber.h"

/**
 *
 * @tparam T - Employee Id type
 * @tparam R - Vehicle type
 * @tparam S - Food type
 */
template<typename T, typename R, typename S>
class UberEats : public Uber<T, R>
{
    S foodType;

public:

    UberEats(T empId, std::string empName, R vt, S ft);

    S getFoodType() const;
    void setFoodType(S foodType);

};


template<typename T, typename R, typename S>
UberEats<T, R, S>::UberEats(T empId, std::string empName, R vt, S ft) :
        Uber<T, R>(empId, empName, vt), foodType(ft)
{}


template<typename T, typename R, typename S>
S UberEats<T, R, S>::getFoodType() const
{
    return foodType;
}


template<typename T, typename R, typename S>
void UberEats<T, R, S>::setFoodType(S foodType)
{
    UberEats::foodType = foodType;
}


#endif //CH12EXAM_UBEREATS_H
