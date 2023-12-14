/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 Exam
 */


#ifndef CH12EXAM_UBER_H
#define CH12EXAM_UBER_H

#include "MileageTracker.h"

/**
 *
 * @tparam T - Employee Id type
 * @tparam R - Vehicle type
 */
template<typename T, typename R>
class Uber : public MileageTracker<T>
{
    R vehicleType;

public:

    Uber(T empId, std::string empName, R vt);

    R getVehicleType() const;
    void setVehicleType(R vt);

};


template<typename T, typename R>
Uber<T, R>::Uber(T empId, std::string empName, R vt) :
        MileageTracker<T>(empId, empName), vehicleType(vt)
{}


template<typename T, typename R>
R Uber<T, R>::getVehicleType() const
{
    return vehicleType;
}


template<typename T, typename R>
void Uber<T, R>::setVehicleType(R vt)
{
    vehicleType = vt;
}


#endif //CH12EXAM_UBER_H
