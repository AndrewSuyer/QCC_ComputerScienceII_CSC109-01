/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.13 Pet information
 */

#ifndef INC_10_13_PETINFORMATION_CATTEST_H
#define INC_10_13_PETINFORMATION_CATTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Cat.h"

class CatTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Cat c1;
        Cat* c2 = new Cat();

        c1.SetName("Andrew");
        c1.SetAge(17);
        c1.SetBreed("Furry");

        c2->SetName("Nathan");
        c2->SetAge(15);
        c2->SetBreed("Mean");

        TS_ASSERT_EQUALS(c1.GetName(), "Andrew")
        TS_ASSERT_EQUALS(c1.GetAge(), 17)
        TS_ASSERT_EQUALS(c1.GetBreed(), "Furry")

        TS_ASSERT_EQUALS(c2->GetName(), "Nathan")
        TS_ASSERT_EQUALS(c2->GetAge(), 15)
        TS_ASSERT_EQUALS(c2->GetBreed(), "Mean")

        std::cout << "\nTesting Cat::PrintInfo()\n";
        c1.PrintInfo();

        std::cout << "\nTesting Cat::PrintInfo() from a Cat pointer (calls Cat::PrintInfo())\n";
        c2->PrintInfo();

        delete c2;
    }

};


#endif // INC_10_13_PETINFORMATION_CATTEST_H
