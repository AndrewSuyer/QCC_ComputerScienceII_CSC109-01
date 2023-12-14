/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 HW part B
 */

#ifndef CH12_HW_B_LINKEDLIST_COURSETEST_H
#define CH12_HW_B_LINKEDLIST_COURSETEST_H


#include <cxxtest/TestSuite.h>
#include <sstream>

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

    void testOperators()
    {
        Course c1;
        Course c2("CSC", 109, "Fall", 1, 22);
        Course c3 = c2;         // copy constructor

        TS_ASSERT(c2 == c3)

        // Assignment operator
        c3 = c1;
        TS_ASSERT(c2 != c3)
        TS_ASSERT(c1 == c3)

        // Comparison operators
        Course c4("CSC", 211, "Spring", 1, 22);
        TS_ASSERT(c2 < c4)
        TS_ASSERT(c4 >= c2)     // >
        TS_ASSERT(c1 >= c3)     // ==

        // Insertion operator
        std::ostringstream oss;
        oss << c2;
        TS_ASSERT_EQUALS(oss.str(), "CSC 109 Fall 1 22\n")
    }


    void testDestructor()
    {
        auto* c5 = new Course();
        delete c5;
    }


    void testGettersAndSetters()
    {
        Course c1;
        Course c2("CSC", 109, "Fall", 1, 22);

        // Getters:
        TS_ASSERT_EQUALS(c2.GetDept(), "CSC")
        TS_ASSERT_EQUALS(c2.GetCoursenum(), 109)
        TS_ASSERT_EQUALS(c2.GetTerm(), "Fall")
        TS_ASSERT_EQUALS(c2.GetSections(), 1)
        TS_ASSERT_EQUALS(c2.GetSeats(), 22)

        // Setters:
        c1.SetDept("CSC");
        c1.SetCoursenum(211);
        c1.SetTerm("Spring");
        c1.SetSections(1);
        c1.SetSeats(22);

        TS_ASSERT_EQUALS(c1.GetDept(), "CSC")
        TS_ASSERT_EQUALS(c1.GetCoursenum(), 211)
        TS_ASSERT_EQUALS(c1.GetTerm(), "Spring")
        TS_ASSERT_EQUALS(c1.GetSections(), 1)
        TS_ASSERT_EQUALS(c1.GetSeats(), 22)
    }


};


#endif // CH12_HW_B_LINKEDLIST_COURSETEST_H
