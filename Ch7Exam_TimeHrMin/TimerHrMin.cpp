/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 7 Exam
 */


#include "TimerHrMin.h"


TimerHrMin::TimerHrMin() :
    hour(0), minute(0)
{

}


TimerHrMin::TimerHrMin(int hours, int minutes) :
    hour(hours), minute(minutes)
{

}


int TimerHrMin::GetHour() const
{
    return hour;
}


int TimerHrMin::GetMinute() const
{
    return minute;
}


TimerHrMin TimerHrMin::operator-(const TimerHrMin &rhs) const
{
    int hours = this->hour - rhs.hour;
    int minutes = this->minute - rhs.minute;
    if (minutes < 0)
    {
        hours -= 1;
        minutes += 60;
    }
    return TimerHrMin(hours, minutes);
}


bool TimerHrMin::operator>=(const TimerHrMin &rhs) const
{
    return (this->hour * 60 + this->minute) >= (rhs.hour * 60 + rhs.minute);
}
