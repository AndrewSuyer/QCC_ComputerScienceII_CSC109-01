/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 Exam
 */

#ifndef CH12EXAM_UBEREATSTEST_H
#define CH12EXAM_UBEREATSTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "UberEats.h"

class UberEatsTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        UberEats<int, std::string, std::string> ue(123456, "Andrew", "SUV", "Fast food");

        TS_ASSERT_EQUALS(ue.getFoodType(), "Fast food")
        ue.setFoodType("BBQ");
        TS_ASSERT_EQUALS(ue.getFoodType(), "BBQ")
    }

};


#endif // CH12EXAM_UBEREATSTEST_H
