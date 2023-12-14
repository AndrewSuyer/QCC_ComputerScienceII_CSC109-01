/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 Exam
 */

#ifndef CH12EXAM_MILEAGETRACKER_H
#define CH12EXAM_MILEAGETRACKER_H

#include <string>
#include <exception>

/**
 *
 * @tparam T - Employee Id type
 */
template<typename T>
class MileageTracker
{
    T employeeId;
    std::string employeeName;
    double totalMiles;

public:

    MileageTracker(T empId, std::string empName);

    T getEmployeeId() const;
    const std::string &getEmployeeName() const;
    double getTotalMiles() const;

    void addMiles(double miles);

};


template<typename T>
void MileageTracker<T>::addMiles(double miles)
{
    if (miles < 0)
        throw std::runtime_error("Mileage can't be negative.");

    totalMiles += miles;
}


template<typename T>
MileageTracker<T>::MileageTracker(T empId, std::string empName) :
    employeeId(empId), employeeName(empName), totalMiles(0)
{}


template<typename T>
T MileageTracker<T>::getEmployeeId() const
{
    return employeeId;
}


template<typename T>
const std::string &MileageTracker<T>::getEmployeeName() const
{
    return employeeName;
}


template<typename T>
double MileageTracker<T>::getTotalMiles() const
{
    return totalMiles;
}



#endif //CH12EXAM_MILEAGETRACKER_H
