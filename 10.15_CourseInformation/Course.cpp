/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.15 Course information
 */


#include "Course.h"
#include <iostream>

const std::string &Course::GetCourseNumber() const
{
    return courseNumber;
}


void Course::SetCourseNumber(const std::string &courseNumber)
{
    Course::courseNumber = courseNumber;
}


const std::string &Course::GetCourseTitle() const
{
    return courseTitle;
}


void Course::SetCourseTitle(const std::string &courseTitle)
{
    Course::courseTitle = courseTitle;
}


void Course::PrintInfo() const
{
    std::cout << "Course Information:\n";
    std::cout << "   Course Number: " << courseNumber << '\n';
    std::cout << "   Course Title: " << courseTitle << '\n';
}
