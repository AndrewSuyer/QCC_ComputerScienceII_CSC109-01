/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.13 Pet information
 */

#ifndef INC_10_13_PETINFORMATION_PETTEST_H
#define INC_10_13_PETINFORMATION_PETTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Pet.h"

class PetTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Pet p1;
        Pet p2;

        p1.SetName("Andrew");
        p1.SetAge(17);

        p2.SetName("Nathan");
        p2.SetAge(15);

        TS_ASSERT_EQUALS(p1.GetName(), "Andrew")
        TS_ASSERT_EQUALS(p1.GetAge(), 17)

        TS_ASSERT_EQUALS(p2.GetName(), "Nathan")
        TS_ASSERT_EQUALS(p2.GetAge(), 15)

        std::cout << "\nTest: Pet::PrintInfo()\n";
        p1.PrintInfo();
    }

};


#endif // INC_10_13_PETINFORMATION_PETTEST_H
