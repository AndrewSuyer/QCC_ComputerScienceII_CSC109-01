/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 7 Exam
 */


#ifndef CH7EXAM_TIMEHRMIN_TIMERHRMIN_H
#define CH7EXAM_TIMEHRMIN_TIMERHRMIN_H


class TimerHrMin
{
public:

    TimerHrMin();

    TimerHrMin(int hours, int minutes);


    int GetHour() const;

    int GetMinute() const;


    TimerHrMin operator-(const TimerHrMin& rhs) const;

    bool operator>=(const TimerHrMin& rhs) const;

private:

    int hour;
    int minute;
};


#endif // CH7EXAM_TIMEHRMIN_TIMERHRMIN_H
