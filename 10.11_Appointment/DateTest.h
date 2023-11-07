/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */

#ifndef INC_10_11_APPOINTMENT_DATETEST_H
#define INC_10_11_APPOINTMENT_DATETEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Date.h"

class DateTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Date d1;
        Date d2(2023, 11, 1);

        // !!! Change current date below for test to work !!!
//        static int currentYear = 2023;
//        static int currentMonth = 11;
//        static int currentDay = 1;
//
//        TS_ASSERT_EQUALS(d1.get_year(), currentYear)
//        TS_ASSERT_EQUALS(d1.get_month(), currentMonth)
//        TS_ASSERT_EQUALS(d1.get_day(), currentDay)

//        std::cout << d1.get_year() << ' ' << d1.get_month() << ' '
//                << d1.get_day() << '\n';

        TS_ASSERT_EQUALS(d2.get_year(), 2023)
        TS_ASSERT_EQUALS(d2.get_month(), 11)
        TS_ASSERT_EQUALS(d2.get_day(), 1)

        Date d3(2023, 11, 1);

        TS_ASSERT(d2 == d3)


    }

};


#endif // INC_10_11_APPOINTMENT_DATETEST_H
