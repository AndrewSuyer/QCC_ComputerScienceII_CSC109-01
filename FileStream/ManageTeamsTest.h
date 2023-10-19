/*
 * Copyright 2023
 * Created by Andrew Suyer
 */

#ifndef FILESTREAM_MANAGETEAMSTEST_H
#define FILESTREAM_MANAGETEAMSTEST_H


#include <cxxtest/TestSuite.h>

// Include class headers here:
#include "Team.h"
#include "ManageTeams.h"

class ManageTeamsTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testVectorComponents()
    {
        // Test if readFile() correctly makes a vector out of the file
        Team t1("Arkansas Travelers", 5, 11);
        Team t2("Vancouver Canadians", 10, 3);
        Team t3("Columbus Clippers", 0, 0);
        Team t4("Norfolk Tides", 6, 0);
        Team t5("Rocky Mountain Vibes", 8, 8);

        std::vector<Team> teams {t1, t2, t3, t4, t5};

        ManageTeams mt;
        mt.readFile("Teams.txt");
        std::vector<Team> mteams = mt.getTeams();

        for (int i = 0; i < teams.size(); ++i)
        {
            TS_ASSERT_EQUALS(teams.at(i), mteams.at(i))
        }
    }

};


#endif // FILESTREAM_MANAGETEAMSTEST_H
