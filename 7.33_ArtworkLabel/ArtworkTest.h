/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.33 Artwork label
 */

#ifndef INC_7_33_ARTWORKLABEL_ARTWORKTEST_H
#define INC_7_33_ARTWORKLABEL_ARTWORKTEST_H

#include <cxxtest/TestSuite.h>

// Include your classes header file(s) below and uncomment.
#include "Artwork.h"

class ArtworkTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)
    Artwork defaultArtwork;
    Artwork artwork;

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested. CxxTest will automatically
    // test all functions beginning with 'test'
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    ArtworkTest() :
        defaultArtwork(),
        artwork("My Painting", 2020, Artist("Andrew", 2006, 2086))
    {
        // Test default constructor and getter functions:
        TS_ASSERT_EQUALS(defaultArtwork.GetTitle(), "unknown");
        TS_ASSERT_EQUALS(defaultArtwork.GetYearCreated(), -1);

        // Test argument constructor and getter functions:
        TS_ASSERT_EQUALS(artwork.GetTitle(), "My Painting");
        TS_ASSERT_EQUALS(artwork.GetYearCreated(), 2020);
    }

    void testPrintInfo()
    {
        defaultArtwork.PrintInfo();
        artwork.PrintInfo();
    }

};

#endif //INC_7_33_ARTWORKLABEL_ARTWORKTEST_H
