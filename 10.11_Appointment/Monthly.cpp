/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */
#include "Monthly.h"


Monthly::Monthly() :
    Appointment(), day(0)
{

}


Monthly::Monthly(const std::string& desc, int d, Time s, Time e) :
    Appointment(desc, s, e), day(d)
{

}


void Monthly::read()
{
    Appointment::read();
    std::cout << "Enter day: ";
    std::cin >> day;
}


void Monthly::save(std::ostream &out) const
{
    out << "Monthly\n";
    out << day << ' ';
    Appointment::save(out);
}


void Monthly::load(std::istream &in)
{
    in >> day;
    Appointment::load(in);
}


bool Monthly::occurs_on(int year, int month, int day) const
{
    return this->day == day;
}

