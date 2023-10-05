/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.17 Mileage tracker
 */

#ifndef INC_8_17_MILEAGETRACKER_MILEAGETRACKERNODETEST_H
#define INC_8_17_MILEAGETRACKER_MILEAGETRACKERNODETEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "MileageTrackerNode.h"

class MileageTrackerNodeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testConstructors()
    {
        MileageTrackerNode* n1 = new MileageTrackerNode;
        MileageTrackerNode* n3 = new MileageTrackerNode(20, "7/10/23");
        MileageTrackerNode* n2 = new MileageTrackerNode(10, "8/9/23", n3);

        n1->InsertAfter(n2);


        TS_ASSERT_DELTA(n1->GetMiles(), 0, 0.001)
        TS_ASSERT_DELTA(n2->GetMiles(), 10, 0.001)
        TS_ASSERT_DELTA(n3->GetMiles(), 20, 0.001)

        TS_ASSERT_EQUALS(n1->GetDate(), "")
        TS_ASSERT_EQUALS(n2->GetDate(), "8/9/23")
        TS_ASSERT_EQUALS(n3->GetDate(), "7/10/23")

        delete n1;
    }

    void testInsertAfter()
    {
        MileageTrackerNode* n1 = new MileageTrackerNode;
        MileageTrackerNode* n2 = new MileageTrackerNode(10, "8/9/23");
        MileageTrackerNode* n3 = new MileageTrackerNode(20, "7/10/23");

        n1->InsertAfter(n2);
        n2->InsertAfter(n3);

        TS_ASSERT_EQUALS(n1->GetNext(), n2)
        TS_ASSERT_EQUALS(n2->GetNext(), n3)
        TS_ASSERT_EQUALS(n3->GetNext(), nullptr)
    }

    void testPrintNodeData()
    {
        MileageTrackerNode* n2 = new MileageTrackerNode(10, "8/9/23");

        n2->PrintNodeData();
    }

};


#endif // INC_8_17_MILEAGETRACKER_MILEAGETRACKERNODETEST_H
