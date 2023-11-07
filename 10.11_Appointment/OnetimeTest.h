/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */

#ifndef INC_10_11_APPOINTMENT_ONETIMETEST_H
#define INC_10_11_APPOINTMENT_ONETIMETEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Onetime.h"

class OnetimeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Onetime o1;
        Onetime o2("Illness", Date(2023, 8, 1), Time(3, 45, 0), Time(4, 30, 0));

        TS_ASSERT(o2.occurs_on(2023, 8, 1))
        TS_ASSERT(!o2.occurs_on(2022, 9, 4))

        std::ostringstream oss;
        o2.save(oss);

        TS_ASSERT_EQUALS(oss.str(), "Onetime\n"
                                    "2023 8 1 3 45 4 30 Illness\n")

        std::cout << "\nTest: Onetime::print()\n";
        o2.print();

        std::istringstream iss;
        std::ostringstream oss2;
        iss.str("2018 2 5 10 10 11 10 dentist");
        o2.load(iss);
        o2.save(oss2);

        TS_ASSERT_EQUALS(oss2.str(), "Onetime\n"
                                     "2018 2 5 10 10 11 10 dentist\n")

//        o2.read();
    }

};


#endif // INC_10_11_APPOINTMENT_ONETIMETEST_H
