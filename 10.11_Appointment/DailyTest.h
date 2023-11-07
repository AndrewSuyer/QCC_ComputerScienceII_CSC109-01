/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */

#ifndef INC_10_11_APPOINTMENT_DAILYTEST_H
#define INC_10_11_APPOINTMENT_DAILYTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Daily.h"

class DailyTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Daily d1;
        Daily d2("Physical", Time(3, 45, 0), Time(4, 30, 0));

        TS_ASSERT(d2.occurs_on(2023, 1, 1))
        TS_ASSERT(d2.occurs_on(2022, 5, 2))

        std::ostringstream oss;
        d2.save(oss);

        TS_ASSERT_EQUALS(oss.str(), "Daily\n"
                                    "3 45 4 30 Physical\n")

        std::cout << "\nTest: Daily::print()\n";
        d2.print();

        std::istringstream iss;
        std::ostringstream oss2;
        iss.str("10 10 11 10 dentist");
        d2.load(iss);
        d2.save(oss2);

        TS_ASSERT_EQUALS(oss2.str(), "Daily\n"
                                    "10 10 11 10 dentist\n")

        TS_ASSERT_EQUALS(d2.getDescription(), "dentist")
        TS_ASSERT_EQUALS(d2.getStart().get_hours(), 10)
        TS_ASSERT_EQUALS(d2.getStart().get_minutes(), 10)
        TS_ASSERT_EQUALS(d2.getEnd().get_hours(), 11)
        TS_ASSERT_EQUALS(d2.getEnd().get_minutes(), 10)

//        d2.read();
    }

};


#endif // INC_10_11_APPOINTMENT_DAILYTEST_H
