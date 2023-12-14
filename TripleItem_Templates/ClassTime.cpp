/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include "ClassTime.h"


ClassTime::ClassTime(std::string d, std::string t) :
    day(std::move(d)), time(std::move(t))
{}


ClassTime::ClassTime(std::string dayTime)
{
    int index = dayTime.find(' ');
    day = dayTime.substr(0, index);
    time = dayTime.substr(index + 1);
}


const std::string &ClassTime::getDay() const
{
    return day;
}


void ClassTime::setDay(const std::string &day)
{
    ClassTime::day = day;
}


const std::string &ClassTime::getTime() const
{
    return time;
}


void ClassTime::setTime(const std::string &time)
{
    ClassTime::time = time;
}


std::ostream &operator<<(std::ostream &out, const ClassTime &c)
{
    out << c.day << ' ' << c.time;
    return out;
}


