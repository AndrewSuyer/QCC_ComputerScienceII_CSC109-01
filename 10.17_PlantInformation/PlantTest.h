/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.17 Plant information
 */

#ifndef INC_10_17_PLANTINFORMATION_PLANTTEST_H
#define INC_10_17_PLANTINFORMATION_PLANTTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Plant.h"

class PlantTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Plant p;

        p.SetPlantName("Cactus");
        p.SetPlantCost(20);

        TS_ASSERT_EQUALS(p.GetPlantName(), "Cactus")
        TS_ASSERT_EQUALS(p.GetPlantCost(), 20)

        std::cout << "\nTest: Plant::PrintInfo()\n";
        p.PrintInfo();
    }

};


#endif // INC_10_17_PLANTINFORMATION_PLANTTEST_H
