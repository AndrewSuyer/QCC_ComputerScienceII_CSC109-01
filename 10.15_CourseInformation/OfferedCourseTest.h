/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.15 Course information
 */

#ifndef INC_10_15_COURSEINFORMATION_OFFEREDCOURSETEST_H
#define INC_10_15_COURSEINFORMATION_OFFEREDCOURSETEST_H

#include <iostream>
#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "OfferedCourse.h"

class OfferedCourseTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        OfferedCourse c;

        c.SetCourseNumber("CSC 109");
        c.SetCourseTitle("Computer Science II");
        c.SetInstructorName("Professor Loi");
        c.SetLocation("S214");
        c.SetClassTime("12:00-1:50");
        c.SetTerm("Fall");

        TS_ASSERT_EQUALS(c.GetCourseNumber(), "CSC 109")
        TS_ASSERT_EQUALS(c.GetCourseTitle(), "Computer Science II")
        TS_ASSERT_EQUALS(c.GetInstructorName(), "Professor Loi")
        TS_ASSERT_EQUALS(c.GetLocation(), "S214")
        TS_ASSERT_EQUALS(c.GetClassTime(), "12:00-1:50")
        TS_ASSERT_EQUALS(c.GetTerm(), "Fall")

        std::cout << "\nTest OfferedCourse::PrintInfo() (calls Course::PrintInfo())\n";
        c.PrintInfo();
    }

};


#endif // INC_10_15_COURSEINFORMATION_OFFEREDCOURSETEST_H
