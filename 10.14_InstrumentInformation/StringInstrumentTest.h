/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.14 Instrument information
 */

#ifndef INC_10_14_INSTRUMENTINFORMATION_STRINGINSTRUMENTTEST_H
#define INC_10_14_INSTRUMENTINFORMATION_STRINGINSTRUMENTTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "StringInstrument.h"

class StringInstrumentTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        StringInstrument i;

        i.SetName("Trumpet");
        i.SetManufacturer("Yamaha");
        i.SetYearBuilt(2020);
        i.SetCost(100);
        i.SetNumOfStrings(0);
        i.SetNumOfFrets(3);
        i.SetIsBowed(false);

        TS_ASSERT_EQUALS(i.GetName(), "Trumpet")
        TS_ASSERT_EQUALS(i.GetManufacturer(), "Yamaha")
        TS_ASSERT_EQUALS(i.GetYearBuilt(), 2020)
        TS_ASSERT_EQUALS(i.GetCost(), 100)
        TS_ASSERT_EQUALS(i.GetNumOfStrings(), 0)
        TS_ASSERT_EQUALS(i.GetNumOfFrets(), 3)
        TS_ASSERT_EQUALS(i.GetIsBowed(), false)

        std::cout << "\nTest StringInstrument::PrintInfo() (calls Instrument::PrintInfo())\n";
        i.PrintInfo();
    }

};


#endif // INC_10_14_INSTRUMENTINFORMATION_STRINGINSTRUMENTTEST_H
