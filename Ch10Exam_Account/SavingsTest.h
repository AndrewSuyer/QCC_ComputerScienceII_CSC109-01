/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */

#ifndef CH10EXAM_ACCOUNT_SAVINGSTEST_H
#define CH10EXAM_ACCOUNT_SAVINGSTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Savings.h"

class SavingsTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Savings s1;
        Savings s2(2000);

        TS_ASSERT_DELTA(s1.get_balance(), 0, 0.001)
        TS_ASSERT_DELTA(s2.get_balance(), 2000, 0.001)

        s1.deposit(100);
        s1.daily_interest();
        s2.daily_interest();

        TS_ASSERT_DELTA(s1.get_balance(), 100 + (0.06 * 100 / 30), 0.001)
        TS_ASSERT_DELTA(s2.get_balance(), 2000 + (0.06 * 2000 / 30), 0.001)
    }

};


#endif // CH10EXAM_ACCOUNT_SAVINGSTEST_H
