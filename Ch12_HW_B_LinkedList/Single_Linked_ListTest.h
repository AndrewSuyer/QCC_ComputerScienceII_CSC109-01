/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 HW part B
 */

#ifndef CH12_HW_B_LINKEDLIST_SINGLE_LINKED_LISTTEST_H
#define CH12_HW_B_LINKEDLIST_SINGLE_LINKED_LISTTEST_H


#include <cxxtest/TestSuite.h>
#include <exception>

// Include class headers here:
#include "Single_Linked_List.h"

class Single_Linked_ListTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testBasics()
    {
        Single_Linked_List<int> l1;
        TS_ASSERT(l1.empty())

        // Push methods:
        l1.push_front(2);
        l1.push_front(1);
        l1.push_front(0);
        l1.push_back(3);

        // l1: 0 1 2 3

        // Getters for front/back
        TS_ASSERT_EQUALS(l1.size(), 4)
        TS_ASSERT_EQUALS(l1.front(), 0)
        TS_ASSERT_EQUALS(l1.back(), 3)

        // Const getters:
        const int& front = l1.front();
        const int& back = l1.back();

        // Insert methods:
        l1.insert(0, -1);       // Test index == 0 case
        l1.insert(10, 3);       // Insert at end (tests insert at end case)
//        int a = 2;
//        l1.sortedInsert(a);

        // l1: -1 0 1 2 3 3

        // Get method:
        TS_ASSERT_EQUALS(l1.size(), 6)
        TS_ASSERT_EQUALS(l1.get(0), -1)
        TS_ASSERT_EQUALS(l1.get(1), 0)
        TS_ASSERT_EQUALS(l1.get(2), 1)
        TS_ASSERT_EQUALS(l1.get(3), 2)
        TS_ASSERT_EQUALS(l1.get(4), 3)
        TS_ASSERT_EQUALS(l1.get(5), 3)

        // Remove method:
        l1.remove(0);       // remove -1 (tests index == 1 case)
        l1.remove(2);       // remove 2  (regular case)
        l1.remove(3);       // remove 3 (test index == num_items)
        
        // l1: 0 1 3

        TS_ASSERT_EQUALS(l1.size(), 3)
        TS_ASSERT_EQUALS(l1.get(0), 0)
        TS_ASSERT_EQUALS(l1.get(1), 1)
        TS_ASSERT_EQUALS(l1.get(2), 3)

        // Find method:
        TS_ASSERT_EQUALS(l1.find(0), 0)
        TS_ASSERT_EQUALS(l1.find(1), 1)
        TS_ASSERT_EQUALS(l1.find(3), 2)

        // Pop methods:
        l1.pop_front();     // remove 0
        l1.pop_back();      // remove 3
        l1.pop_back();      // remove 1  (test last element in list case)

        // l1: (empty)

        TS_ASSERT_EQUALS(l1.size(), 0)

        // Destructor
//        delete &l1;
    }


    void testPushers()
    {
        Single_Linked_List<int> l1;
        TS_ASSERT(l1.empty())

        // Push methods:
        l1.push_front(2);
        l1.push_front(1);
        l1.push_front(0);
        l1.push_back(3);

        // l1: 0 1 2 3

        TS_ASSERT_EQUALS(l1.get(0), 0)
        TS_ASSERT_EQUALS(l1.get(1), 1)
        TS_ASSERT_EQUALS(l1.get(2), 2)
        TS_ASSERT_EQUALS(l1.get(3), 3)
    }


    void testRemove()
    {
        Single_Linked_List<int> l1;
        TS_ASSERT(l1.empty())

        // Push methods:
        l1.push_front(2);
        l1.push_front(1);
        l1.push_front(0);
        l1.push_back(3);

        // l1: 0 1 2 3

        // Remove methods:
        l1.remove(0);       // 1 2 3
        l1.remove(1);       // 1 3
        l1.remove(1);       // 1 (tests index == num_items -1)

        TS_ASSERT_EQUALS(l1.size(), 1)
        TS_ASSERT_EQUALS(l1.get(0), 1)
        TS_ASSERT_EQUALS(l1.front(), 1)
        TS_ASSERT_EQUALS(l1.back(), 1)
    }


    void testSortedInsert()
    {
        Single_Linked_List<int> l1;
        int nums[5] {5, 4, 1, 3, 2};

        for (int i = 0; i < 5; ++i)
        {
            l1.sortedInsert(nums[i]);
            TSM_ASSERT_EQUALS("For loop iteration " + std::to_string(i), l1.size(), i + 1)
        }

        TS_ASSERT_EQUALS(l1.get(0), 1)
        TS_ASSERT_EQUALS(l1.get(1), 2)
        TS_ASSERT_EQUALS(l1.get(2), 3)
        TS_ASSERT_EQUALS(l1.get(3), 4)
        TS_ASSERT_EQUALS(l1.get(4), 5)
    }


    void testExceptions()
    {
        Single_Linked_List<int> l1;

        // Doing things to empty list:
        TS_ASSERT_THROWS_ANYTHING(l1.front())
        TS_ASSERT_THROWS_ANYTHING(l1.back())
        TS_ASSERT_THROWS_ANYTHING(l1.pop_front())
        TS_ASSERT_THROWS_ANYTHING(l1.pop_back())
        TS_ASSERT_EQUALS(l1.size(), 0)

        l1.push_back(0);
        l1.push_back(1);
        l1.push_back(2);

        // Doing things at out_of_range index
        TS_ASSERT_THROWS_ANYTHING(l1.get(100))
        TS_ASSERT_THROWS_ANYTHING(l1.remove(100))
        TS_ASSERT_THROWS_ANYTHING(l1.find(100))
    }

};


#endif // CH12_HW_B_LINKEDLIST_SINGLE_LINKED_LISTTEST_H
