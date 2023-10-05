/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 6.72 2D array pointer arithmetic
 */

#ifndef INC_6_72_2DARRAYPOINTERS_TWODARRAYTEST_H
#define INC_6_72_2DARRAYPOINTERS_TWODARRAYTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>
//#include <sstream>  // don't remove this line; use for ostringstream
//#include <iomanip>      // use std::setw to set the width for each number

// Include class headers here:
#include "TwoDArray.h"

class TwoDArrayTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testSetRow()
    {
        double arr[4][3] = { {1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9},
                             {10, 11, 12}};

        double replacement[3] = {44, 55, 66};

        // Replace {4, 5, 6} with {44, 55, 66} in arr[1]
        set_row((double*) arr, 1, 3, replacement);


        TS_ASSERT_DELTA(*(*(arr)),          1, 0.001)
        TS_ASSERT_DELTA(*(*(arr) + 1),      2, 0.001)
        TS_ASSERT_DELTA(*(*(arr) + 2),      3, 0.001)
        TS_ASSERT_DELTA(*(*(arr+1)),        44, 0.001)
        TS_ASSERT_DELTA(*(*(arr+1) + 1),    55, 0.001)
        TS_ASSERT_DELTA(*(*(arr+1) + 2),    66, 0.001)
        TS_ASSERT_DELTA(*(*(arr+2)),        7, 0.001)
        TS_ASSERT_DELTA(*(*(arr+2) + 1),    8, 0.001)
        TS_ASSERT_DELTA(*(*(arr+2) + 2),    9, 0.001)
        TS_ASSERT_DELTA(*(*(arr+3)),        10, 0.0010)
        TS_ASSERT_DELTA(*(*(arr+3) + 1),    11, 0.001)
        TS_ASSERT_DELTA(*(*(arr+3) + 2),    12, 0.001)
    }

    void testGetRow()
    {
        double arr[4][3] = { {1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9},
                             {10, 11, 12}};

        double* row1 = get_row((double*) arr, 1, 3);

        // Check if row1 points to the correct row:
        TS_ASSERT_EQUALS(row1, *(arr+1));

        // Check if elements can be accessed by row1:
        TS_ASSERT_DELTA(*(row1),       *(*(arr+1)),     0.001)
        TS_ASSERT_DELTA(*(row1 + 1),   *(*(arr+1) + 1), 0.001)
        TS_ASSERT_DELTA(*(row1 + 2),   *(*(arr+1) + 2), 0.001)
    }

    void testSetElement()
    {
        double arr[4][3] = { {1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9},
                             {10, 11, 12}};

        // arr[1][2] = 66
        set_element((double*) arr, 1, 3, 2, 66);
        TS_ASSERT_DELTA(*(*(arr + 1) + 2),     66, 0.001)

        // arr[2][1] = 77
        set_element((double*) arr, 2, 3, 1, 77);
        TS_ASSERT_DELTA(*(*(arr + 2) + 1),     77, 0.001)

        // arr[0][0] = 11
        set_element((double*) arr, 0, 3, 0, 11);
        TS_ASSERT_DELTA(*(*(arr)),             11, 0.001)
    }

    void testGetElement()
    {
       double arr[4][3] = { {1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9},
                             {10, 11, 12}};

        TS_ASSERT_DELTA(get_element((double*) arr, 0, 3, 0), 1, 0.001)
        TS_ASSERT_DELTA(get_element((double*) arr, 2, 3, 1), 8, 0.001)
        TS_ASSERT_DELTA(get_element((double*) arr, 3, 3, 2), 12, 0.001)
    }

    void testSum()
    {
        double arr[4][3] = { {1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9},
                             {10, 11, 12}};

        TS_ASSERT_DELTA(sum((double*) arr, 4, 3), 1+2+3+4+5+6+7+8+9+10+11+12, 0.001)
    }

    void testFindMaxMin()
    {
        double arr[4][3] = { {2, 1, 3},
                             {4, 5, 6},
                             {7, 8, 9},
                             {10, 11, 12}};

        TS_ASSERT_DELTA(find_max((double*) arr, 4, 3), 12, 0.001)
        TS_ASSERT_DELTA(find_min((double*) arr, 4, 3), 1, 0.001)
    }
    
    void testToString()
    {
        double arr[4][3] = { {1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9},
                             {10, 11, 12}};

        std::string arrString = "      1.00      2.00      3.00\n"
                                "      4.00      5.00      6.00\n"
                                "      7.00      8.00      9.00\n"
                                "     10.00     11.00     12.00\n";

        TS_ASSERT_EQUALS(to_string((double*) arr, 4, 3), arrString)
    }

};


#endif // INC_6_72_2DARRAYPOINTERS_TWODARRAYTEST_H
