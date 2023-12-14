/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 Exam
 */

#ifndef CH12EXAM_MILEAGETRACKERTEST_H
#define CH12EXAM_MILEAGETRACKERTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "MileageTracker.h"

class MileageTrackerTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testGettersAndSetters()
    {
        MileageTracker<int> e1(123456, "Andrew");
        MileageTracker<std::string> e2("ABCDEF", "Nathan");

        TS_ASSERT_EQUALS(e1.getEmployeeId(), 123456)
        TS_ASSERT_EQUALS(e1.getEmployeeName(), "Andrew")
        TS_ASSERT_EQUALS(e1.getTotalMiles(), 0)

        TS_ASSERT_EQUALS(e2.getEmployeeId(), "ABCDEF")
        TS_ASSERT_EQUALS(e2.getEmployeeName(), "Nathan")
        TS_ASSERT_EQUALS(e2.getTotalMiles(), 0)
    }


    void testAddMiles()
    {
        MileageTracker<int> e1(123456, "Andrew");

        TS_ASSERT_THROWS_ANYTHING(e1.addMiles(-100))

        e1.addMiles(100);
        TS_ASSERT_EQUALS(e1.getTotalMiles(), 100)
    }

};


#endif // CH12EXAM_MILEAGETRACKERTEST_H
