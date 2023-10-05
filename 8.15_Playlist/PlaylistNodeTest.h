/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.15 Playlist
 */

#ifndef INC_8_15_PLAYLIST_PLAYLISTNODETEST_H
#define INC_8_15_PLAYLIST_PLAYLISTNODETEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "PlaylistNode.h"

class PlaylistNodeTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testGetters()
    {
        PlaylistNode n1;
        PlaylistNode n2("ABC", "Trash", "Andrew Suyer", 100);

        TS_ASSERT_EQUALS(n1.GetID(), "none")
        TS_ASSERT_EQUALS(n1.GetSongName(), "none")
        TS_ASSERT_EQUALS(n1.GetArtistName(), "none")
        TS_ASSERT_EQUALS(n1.GetSongLength(), 0)
        TS_ASSERT_EQUALS(n1.GetNext(), nullptr)

        TS_ASSERT_EQUALS(n2.GetID(), "ABC")
        TS_ASSERT_EQUALS(n2.GetSongName(), "Trash")
        TS_ASSERT_EQUALS(n2.GetArtistName(), "Andrew Suyer")
        TS_ASSERT_EQUALS(n2.GetSongLength(), 100)
        TS_ASSERT_EQUALS(n2.GetNext(), nullptr)
    }

    void testInserts()
    {
        PlaylistNode n1("A", "A", "A", 1);
        PlaylistNode n2("B", "B", "B", 2);
        PlaylistNode n3("C", "C", "C", 3);
        PlaylistNode n4("D", "D", "D", 4);
        PlaylistNode n5("E", "E", "E", 5);
        PlaylistNode n6("F", "F", "F", 6);
        PlaylistNode* head = &n1;

//        n1.SetNext(&n2);            // tests case where this->nextNodePtr == nullptr
//        n3.InsertAfter(&n2);        // tests case nodePtr == nullptr
//        n6.InsertAfter(&n3);        // tests case nodePtr == nullptr
//        n3.SetNext(&n4);            // tests case where this->nextNodePtr != nullptr
//        n5.InsertAfter(&n4);        // tests case where nodePtr != nullptr

        n1.SetNext(&n2);
        n2.InsertAfter(&n3);
        n3.InsertAfter(&n4);
        n4.InsertAfter(&n5);
        n5.InsertAfter(&n6);

        TS_ASSERT_EQUALS(n1.GetNext(), &n2)
        TS_ASSERT_EQUALS(n2.GetNext(), &n3)
        TS_ASSERT_EQUALS(n3.GetNext(), &n4)
        TS_ASSERT_EQUALS(n4.GetNext(), &n5)
        TS_ASSERT_EQUALS(n5.GetNext(), &n6)
        TS_ASSERT_EQUALS(n6.GetNext(), nullptr)

        n6.SetNextToNullptr();
    }

    void testPrintPlaylistNode()
    {
        PlaylistNode n1("A", "A", "A", 1);

        n1.PrintPlaylistNode();
    }

};


#endif // INC_8_15_PLAYLIST_PLAYLISTNODETEST_H
