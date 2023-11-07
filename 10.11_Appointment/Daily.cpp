/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */
#include "Daily.h"


Daily::Daily() :
    Appointment()
{}


Daily::Daily(const std::string& desc, Time s, Time e) :
    Appointment(desc, s, e)
{}


void Daily::save(std::ostream &out) const
{
    out << "Daily\n";
    Appointment::save(out);
}


bool Daily::occurs_on(int year, int month, int day) const
{
    return true;        // Daily appointments occur EVERY DAY, so this is always true
}

