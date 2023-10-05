/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch8 exam
 */

#ifndef CH8EXAM_NAMELISTTEST_H
#define CH8EXAM_NAMELISTTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "NameList.h"

class NameListTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testConstructor()
    {
        NameList l1;    // test default constructor

        TS_ASSERT_EQUALS(l1.getHead(), nullptr)
        TS_ASSERT_EQUALS(l1.getTail(), nullptr)
    }

    void testCopyConstructorAndOperator()
    {
        NameList l1;

        // Fill list with items:
        NameNode *n1 = new NameNode("Andrew", 17);
        NameNode *n2 = new NameNode("Nathan", 15);
        NameNode *n3 = new NameNode("Hannah", 14);
        l1.push_back(n1);
        l1.push_back(n2);
        l1.push_back(n3);

        NameList l2 = l1;   // test copy constructor

        TS_ASSERT_DIFFERS(&l2, &l1)

        NameList l3;
        l3.push_back(new NameNode("ABC", 123));
        l3.push_back(new NameNode("DEF", 456));

        l3 = l1;            // test assignment operator

        TS_ASSERT_DIFFERS(&l3, &l1)
        TS_ASSERT_DIFFERS(&l3, &l2)
    }

    void testPushFront()
    {
        NameList l1;

        NameNode* n1 = new NameNode("Andrew", 17);
        NameNode* n2 = new NameNode("Nathan", 15);
        NameNode* n3 = new NameNode("Hannah", 14);

        l1.push_front(n1);
        l1.push_front(n2);
        l1.push_front(n3);

        // list should be n3 n2 n1

        TS_ASSERT_EQUALS(l1.getHead(), n3)
        TS_ASSERT_EQUALS(l1.getTail(), n1)

        TS_ASSERT_EQUALS(n3->getNext(), n2)
        TS_ASSERT_EQUALS(n2->getNext(), n1)
        TS_ASSERT_EQUALS(n1->getNext(), nullptr)

        // ~NameList deletes all the NameNodes (should print delete stuff)
    }

    void testPushBack()
    {
        NameList l1;

        NameNode* n1 = new NameNode("Andrew", 17);
        NameNode* n2 = new NameNode("Nathan", 15);
        NameNode* n3 = new NameNode("Hannah", 14);

        l1.push_back(n1);
        l1.push_back(n2);
        l1.push_back(n3);

        // List should be n1 n2 n3

        TS_ASSERT_EQUALS(l1.getHead(), n1)
        TS_ASSERT_EQUALS(l1.getTail(), n3)

        TS_ASSERT_EQUALS(n1->getNext(), n2)
        TS_ASSERT_EQUALS(n2->getNext(), n3)
        TS_ASSERT_EQUALS(n3->getNext(), nullptr)

        // ~NameList deletes all the NameNodes (should print delete stuff)
    }

    void testPrint()
    {
        NameList l1;

        NameNode* n1 = new NameNode("Andrew", 17);
        NameNode* n2 = new NameNode("Nathan", 15);
        NameNode* n3 = new NameNode("Hannah", 14);

        l1.push_back(n1);
        l1.push_back(n2);
        l1.push_back(n3);

        l1.print();
    }

};


#endif // CH8EXAM_NAMELISTTEST_H
