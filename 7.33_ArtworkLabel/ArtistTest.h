/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.33 Artwork label
 */

#ifndef INC_7_33_ARTWORKLABEL_ARTISTTEST_H
#define INC_7_33_ARTWORKLABEL_ARTISTTEST_H

#include <cxxtest/TestSuite.h>

//Include your classes header file(s) below and uncomment.
#include "Artist.h"


class ArtistTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)
    Artist defaultArtist;
    Artist artist;

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested. CxxTest will automatically
    // test all functions beginning with 'test'
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    ArtistTest() :
        artist("Andrew", 2006, 2086),
        defaultArtist()
    {
        // Test argument constructor and getter functions:
        TS_ASSERT_EQUALS(artist.GetName(), "Andrew");
        TS_ASSERT_EQUALS(artist.GetBirthYear(), 2006);
        TS_ASSERT_EQUALS(artist.GetDeathYear(), 2086);

        // Test default constructor:
        TS_ASSERT_EQUALS(defaultArtist.GetName(), "unknown");
        TS_ASSERT_EQUALS(defaultArtist.GetBirthYear(), -1);
        TS_ASSERT_EQUALS(defaultArtist.GetDeathYear(), -1);
    }

    void testPrintInfo()
    {
        defaultArtist.PrintInfo();
        artist.PrintInfo();

        // Unknown death year:
        Artist("name", 2006, -1).PrintInfo();
    }

};

#endif //INC_7_33_ARTWORKLABEL_ARTISTTEST_H
