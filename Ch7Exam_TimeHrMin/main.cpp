#include <iostream>

#include "TimerHrMin.h"

int main()
{
    // create a class TimerHrMin t3 object
    // create a class TimerHrMin t1 object with hour=9 and minute=30
    // create a class TimerHrMin t2 object with hour=13 and minute=5
    TimerHrMin t1(9, 30);
    TimerHrMin t2(13, 5);
    TimerHrMin t3;

     if (t2 >=t1)       // test overloading compare >= operator
        t3 = t2 - t1;   // test overloading subtract - operator
     else
        t3 = t1 - t2;   // test overloading subtract - operator

    // output:
    // t3.hour == 3
    // t3.minute = 35
    std::cout << "T1: hour=" << t1.GetHour() << ", minute=" << t1.GetMinute() << std::endl;
    std::cout << "T2: hour=" << t2.GetHour() << ", minute=" << t2.GetMinute() << std::endl;
    std::cout << "T3: hour=" << t3.GetHour() << " minute=" << t3.GetMinute() << std::endl;

    // create a class TimerHrMin t1 object with hour=9 and minute=5
    // create a class TimerHrMin t2 object with hour=13 and minute=30

    t1 = TimerHrMin(9, 5);
    t2 = TimerHrMin(13, 30);

    if (t2 >=t1)       // test overloading compare >= operator
        t3 = t2 - t1;   // test overloading subtract - operator
    else
        t3 = t1 - t2;   // test overloading subtract - operator

    // output:
    // t3.hour == 4
    // t3.minute = 25
    std::cout << "T1: hour=" << t1.GetHour() << ", minute=" << t1.GetMinute() << std::endl;
    std::cout << "T2: hour=" << t2.GetHour() << ", minute=" << t2.GetMinute() << std::endl;
    std::cout << "T3: hour=" << t3.GetHour() << " minute=" << t3.GetMinute() << std::endl;

    // create a class TimerHrMin t1 object with hour=9 and minute=30
    // create a class TimerHrMin t2 object with hour=13 and minute=30

    t1 = TimerHrMin(9, 30);
    t2 = TimerHrMin(13, 30);

    if (t2 >=t1)        // test overloading compare >= operator
        t3 = t2 - t1;   // test overloading subtract - operator
    else
        t3 = t1 - t2;   // test overloading subtract - operator

    // output:
    // t3.hour == 4
    // t3.minute = 0
    std::cout << "T1: hour=" << t1.GetHour() << ", minute=" << t1.GetMinute() << std::endl;
    std::cout << "T2: hour=" << t2.GetHour() << ", minute=" << t2.GetMinute() << std::endl;
    std::cout << "T3: hour=" << t3.GetHour() << " minute=" << t3.GetMinute() << std::endl;

    return 0;
}
