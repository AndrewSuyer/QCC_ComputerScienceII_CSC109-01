/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.15 Course information
 */

#ifndef INC_10_15_COURSEINFORMATION_COURSETEST_H
#define INC_10_15_COURSEINFORMATION_COURSETEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Course.h"

class CourseTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Course c;

        c.SetCourseNumber("CSC 109");
        c.SetCourseTitle("Computer Science II");

        TS_ASSERT_EQUALS(c.GetCourseNumber(), "CSC 109")
        TS_ASSERT_EQUALS(c.GetCourseTitle(), "Computer Science II")

        std::cout << "\nTest Course::PrintInfo()\n";
        c.PrintInfo();
    }

};


#endif // INC_10_15_COURSEINFORMATION_COURSETEST_H
