/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */
#include "Time.h"


Time::Time(int hour, int min, int sec) :
    time_in_secs(hour * 60 * 60 + min * 60 + sec)
{

}


Time::Time() :
    time_in_secs((int) time(nullptr))       // current time
{

}


int Time::get_hours() const
{
    static int secondsPerHour = 60.0 * 60.0;
    return time_in_secs / secondsPerHour;
}


int Time::get_minutes() const
{
    static int secondsPerMinute = 60;
    return (time_in_secs / secondsPerMinute) % 60;
}


int Time::get_seconds() const
{
    return time_in_secs % 60;
}


int Time::seconds_from(Time t) const
{
    int time = this->time_in_secs - t.time_in_secs;
    return time;
}


void Time::add_seconds(int s)
{
    time_in_secs += s;
}

