/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.29 Triangle area comparison
 */

//

#ifndef INC_7_29_TRIANGLEAREACOMPARISON_TRIANGLETEST_H
#define INC_7_29_TRIANGLEAREACOMPARISON_TRIANGLETEST_H

#include <cxxtest/TestSuite.h>

//Include your classes header file(s) below and uncomment.
#include "Triangle.h"

class TriangleTest : public CxxTest::TestSuite
{
private:

    Triangle triangle;

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested. CxxTest will automatically
    // test all functions beginning with 'test'
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.


    void testGetArea()
    {
        triangle.SetBase(3);
        triangle.SetHeight(4);
        double area = triangle.GetArea();
        TS_ASSERT_EQUALS(area, 0.5 * 3 * 4);
    }

    void testPrintInfo()
    {
        triangle.SetBase(3);
        triangle.SetHeight(4);
        triangle.PrintInfo();
    }

};

#endif //INC_7_29_TRIANGLEAREACOMPARISON_TRIANGLETEST_H
