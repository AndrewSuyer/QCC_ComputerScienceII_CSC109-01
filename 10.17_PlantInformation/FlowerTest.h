/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.17 Plant information
 */

#ifndef INC_10_17_PLANTINFORMATION_FLOWERTEST_H
#define INC_10_17_PLANTINFORMATION_FLOWERTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Flower.h"

class FlowerTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Flower p;

        p.SetPlantName("Cactus");
        p.SetPlantCost(20);
        p.SetPlantType(true);
        p.SetColorOfFlowers("Green");

        TS_ASSERT_EQUALS(p.GetPlantName(), "Cactus")
        TS_ASSERT_EQUALS(p.GetPlantCost(), 20)
        TS_ASSERT_EQUALS(p.GetPlantType(), true)
        TS_ASSERT_EQUALS(p.GetColorOfFlowers(), "Green")

        std::cout << "\nTest: Flower::PrintInfo()\n";
        p.PrintInfo();
    }

};


#endif // INC_10_17_PLANTINFORMATION_FLOWERTEST_H
