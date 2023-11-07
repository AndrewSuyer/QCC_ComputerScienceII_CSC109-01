/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.15 Course information
 */


#include "OfferedCourse.h"


const std::string &OfferedCourse::GetInstructorName() const
{
    return instructorName;
}


void OfferedCourse::SetInstructorName(const std::string &instructorName)
{
    OfferedCourse::instructorName = instructorName;
}


const std::string &OfferedCourse::GetLocation() const
{
    return location;
}


void OfferedCourse::SetLocation(const std::string &location)
{
    OfferedCourse::location = location;
}


const std::string &OfferedCourse::GetClassTime() const
{
    return classTime;
}


void OfferedCourse::SetClassTime(const std::string &classTime)
{
    OfferedCourse::classTime = classTime;
}


const std::string &OfferedCourse::GetTerm() const
{
    return term;
}


void OfferedCourse::SetTerm(const string &t)
{
    term = t;
}
