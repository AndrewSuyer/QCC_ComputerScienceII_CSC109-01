/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.16 Book information
 */

#ifndef INC_10_16_BOOKINFORMATION_ENCYCLOPEDIATEST_H
#define INC_10_16_BOOKINFORMATION_ENCYCLOPEDIATEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>

// Include class headers here:
#include "Encyclopedia.h"

class EncyclopediaTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testAll()
    {
        Encyclopedia b;

        b.SetTitle("Harry Potter");
        b.SetAuthor("JK Rowling");
        b.SetPublisher("Barnes and Nobel");
        b.SetPublicationDate("January 2000");
        b.SetEdition("First");
        b.SetNumPages(500);
        b.SetNumVolumes(7);

        TS_ASSERT_EQUALS(b.GetTitle(), "Harry Potter")
        TS_ASSERT_EQUALS(b.GetAuthor(), "JK Rowling")
        TS_ASSERT_EQUALS(b.GetPublisher(), "Barnes and Nobel")
        TS_ASSERT_EQUALS(b.GetPublicationDate(), "January 2000")
        TS_ASSERT_EQUALS(b.GetEdition(), "First")
        TS_ASSERT_EQUALS(b.GetNumPages(), 500)
        TS_ASSERT_EQUALS(b.GetNumVolumes(), 7)

        std::cout << "\nTesting Encyclopedia::PrintInfo()\n";
        b.PrintInfo();
    }

};


#endif // INC_10_16_BOOKINFORMATION_ENCYCLOPEDIATEST_H
