/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */

#include <ctime>
#include "Date.h"


Date::Date()
{
    long t = time(nullptr);
    year = 1970 + t / 31536000;
    month = (t / 2628288) % 12 + 1;
    day = (t / 604800) % 7;
}


Date::Date(int y, int m, int d) :
    year(y), month(m), day(d)
{

}


int Date::get_year() const
{
    return year;
}


int Date::get_month() const
{
    return month;
}


int Date::get_day() const
{
    return day;
}


bool Date::operator==(const Date& other) const
{
    return year == other.year &&
            month == other.month &&
            day == other.day;
}



