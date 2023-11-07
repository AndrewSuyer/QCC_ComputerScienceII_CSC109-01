/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */

#ifndef INC_10_11_APPOINTMENT_TIMETEST_H
#define INC_10_11_APPOINTMENT_TIMETEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Time.h"

class TimeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Time t1;
        Time t2(3, 30, 10);

        TS_ASSERT_DELTA(t1.get_seconds(), time(nullptr) % 60, 10)
        TS_ASSERT_DELTA(t1.get_minutes(), (time(nullptr) / 60) % 60, 10)
        TS_ASSERT_DELTA(t1.get_hours(), time(nullptr) / 3600.0, 10)

        TS_ASSERT_EQUALS(t2.get_seconds(), 10)
        TS_ASSERT_EQUALS(t2.get_minutes(), 30)
        TS_ASSERT_EQUALS(t2.get_hours(), 3)

        Time t3(3, 30, 50);

        TS_ASSERT_EQUALS(t3.seconds_from(t2), 40)
        TS_ASSERT_EQUALS(t2.seconds_from(t3), -40)

        t2.add_seconds(40);

        TS_ASSERT_EQUALS(t2.get_seconds(), 50)
        TS_ASSERT_EQUALS(t2.get_minutes(), 30)
        TS_ASSERT_EQUALS(t2.get_hours(), 3)
    }

};


#endif // INC_10_11_APPOINTMENT_TIMETEST_H
