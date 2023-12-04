/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */

#ifndef CH10EXAM_ACCOUNT_CHECKINGTEST_H
#define CH10EXAM_ACCOUNT_CHECKINGTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Checking.h"

class CheckingTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Checking c1;
        Checking c2(2000);

        TS_ASSERT_DELTA(c1.get_balance(), 0, 0.001)
        TS_ASSERT_DELTA(c2.get_balance(), 2000, 0.001)

        c1.deposit(100);
        c1.daily_interest();        // does nothing
        c2.daily_interest();

        TS_ASSERT_DELTA(c1.get_balance(), 100, 0.001)
        TS_ASSERT_DELTA(c2.get_balance(), 2000 + (1000 * 0.03 / 30), 0.001)

        // +5000 -2000 daily 3002
        // 3000

        Checking acc(3000);
        acc.daily_interest();
        TS_ASSERT_DELTA(acc.get_balance(), 3002, 0.001)
    }

};


#endif // CH10EXAM_ACCOUNT_CHECKINGTEST_H
