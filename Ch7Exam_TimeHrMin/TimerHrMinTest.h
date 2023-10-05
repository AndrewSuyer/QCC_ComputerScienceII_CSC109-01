/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 7 Exam
 */

#ifndef CH7EXAM_TIMEHRMIN_TIMERHRMINTEST_H
#define CH7EXAM_TIMEHRMIN_TIMERHRMINTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "TimerHrMin.h"

class TimerHrMinTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testGetters()
    {
        TimerHrMin t1;
        TimerHrMin t2(1, 50);

        TS_ASSERT_EQUALS(t1.GetHour(), 0);
        TS_ASSERT_EQUALS(t1.GetMinute(), 0);

        TS_ASSERT_EQUALS(t2.GetHour(), 1);
        TS_ASSERT_EQUALS(t2.GetMinute(), 50);
    }

    void testSubtraction()
    {
        TimerHrMin t1(3, 10);
        TimerHrMin t2(1, 30);
        TimerHrMin t3(0, 20);
        TimerHrMin t4;

        t4 = t1 - t2;
        TS_ASSERT_EQUALS(t4.GetHour(), 1);
        TS_ASSERT_EQUALS(t4.GetMinute(), 40);

        t4 = t2 - t3;
        TS_ASSERT_EQUALS(t4.GetHour(), 1);
        TS_ASSERT_EQUALS(t4.GetMinute(), 10);
    }

    void testComparison()
    {
        TimerHrMin t1(3, 10);
        TimerHrMin t2(1, 30);
        TimerHrMin t3(1, 30);
        TimerHrMin t4;

        TS_ASSERT(t1 >= t2);
        TS_ASSERT(t2 >= t3);
        TS_ASSERT(t2 >= t4);
    }

};


#endif // CH7EXAM_TIMEHRMIN_TIMERHRMINTEST_H
