/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */

#include <iomanip>
#include "Appointment.h"


Appointment::Appointment() :
    description(), start(), end()
{}


Appointment::Appointment(const std::string& desc, Time s, Time e) :
    description(desc), start(s), end(e)
{}


void Appointment::print() const
{
    int startHour = start.get_hours(), endHour = end.get_hours();
    int startMin = start.get_minutes() % 60, endMin = end.get_minutes() % 60;
    std::cout << std::setfill('0');
    std::cout << startHour << ':' << std::setw(2) << startMin << " - "
                << endHour << ':' << std::setw(2) << endMin << ' ' << description << std::endl;
    std::cout << std::setfill(' ');
}


void Appointment::read()
{
    std::cout << "Enter start_hours start_mins end_hours end_mins descript:\n";
    int startHour, startMin, endHour, endMin;
    std::cin >> startHour >> startMin >> endHour >> endMin >> description;
    start = Time(startHour, startMin, 0);
    end = Time(endHour, endMin, 0);
}


void Appointment::save(std::ostream &out) const
{
    out << start.get_hours() << ' ' << start.get_minutes() % 60 << ' '
        << end.get_hours() << ' ' << end.get_minutes() % 60 << ' '
        << description << '\n';
}


void Appointment::load(std::istream &in)
{
    int startHour, startMin, endHour, endMin;
    in >> startHour >> startMin >> endHour >> endMin >> description;

    start = Time(startHour, startMin, 0);
    end = Time(endHour, endMin, 0);
}


const std::string &Appointment::getDescription() const
{
    return description;
}


Time Appointment::getStart() const
{
    return start;
}


Time Appointment::getEnd() const
{
    return end;
}

