/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */

#ifndef INC_10_11_APPOINTMENT_MONTHLYTEST_H
#define INC_10_11_APPOINTMENT_MONTHLYTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Monthly.h"

class MonthlyTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Monthly m1;
        Monthly m2("Ortho", 5,  Time(3, 45, 0), Time(4, 30, 0));

        TS_ASSERT(m2.occurs_on(10, 3, 5))
        TS_ASSERT(!m2.occurs_on(1, 5, 2))

        std::ostringstream oss;
        m2.save(oss);

        TS_ASSERT_EQUALS(oss.str(), "Monthly\n"
                                    "5 3 45 4 30 Ortho\n")

        std::cout << "\nTest: Monthly::print()\n";
        m2.print();

        std::istringstream iss;
        std::ostringstream oss2;
        iss.str("5 10 10 11 10 dentist");
        m2.load(iss);
        m2.save(oss2);

        TS_ASSERT_EQUALS(oss2.str(), "Monthly\n"
                                     "5 10 10 11 10 dentist\n")

//        m2.read();
    }

};


#endif // INC_10_11_APPOINTMENT_MONTHLYTEST_H
