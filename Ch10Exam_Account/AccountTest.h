/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */

#ifndef CH10EXAM_ACCOUNT_ACCOUNTTEST_H
#define CH10EXAM_ACCOUNT_ACCOUNTTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Account.h"

class AccountTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Account a1;
        Account a2(2000);

        a1.deposit(100);
        TS_ASSERT_DELTA(a1.get_balance(), 100, 0.001)
        a1.withdraw(20);
        TS_ASSERT_DELTA(a1.get_balance(), 80, 0.001)

        a2.daily_interest();                    // does nothing
        TS_ASSERT_DELTA(a2.get_balance(), 2000, 0.001);
    }

};


#endif // CH10EXAM_ACCOUNT_ACCOUNTTEST_H
