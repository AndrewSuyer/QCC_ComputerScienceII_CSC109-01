/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 Exam
 */

#ifndef CH12EXAM_UBERTEST_H
#define CH12EXAM_UBERTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Uber.h"

class UberTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Uber<int, std::string> u1(123456, "Andrew", "SUV");

        TS_ASSERT_EQUALS(u1.getVehicleType(), "SUV")
        u1.setVehicleType("Sedan");
        TS_ASSERT_EQUALS(u1.getVehicleType(), "Sedan")
    }

};


#endif // CH12EXAM_UBERTEST_H
