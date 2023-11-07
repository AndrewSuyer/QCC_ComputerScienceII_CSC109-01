/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */


#include "Onetime.h"


Onetime::Onetime() :
    Appointment(), when()
{}


Onetime::Onetime(const std::string &desc, Date d, Time s, Time e) :
    Appointment(desc, s, e), when(d)
{}


void Onetime::read()
{
    Appointment::read();
    std::cout << "Enter year month day: ";
    int y, m, d;
    std::cin >> y >> m >> d;
    when = Date(y, m, d);
}


void Onetime::save(std::ostream &out) const
{
    out << "Onetime\n";
    out << when.get_year() << ' ' << when.get_month() << ' ' << when.get_day() << ' ';
    Appointment::save(out);
}


void Onetime::load(std::istream &in)
{
    int y, m, d;
    in >> y >> m >> d;
    when = Date(y, m, d);
    Appointment::load(in);
}


bool Onetime::occurs_on(int year, int month, int day) const
{
    return Date(year, month, day) == when;
}

