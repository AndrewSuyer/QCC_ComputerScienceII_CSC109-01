/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.31 Winning team
 */

//

#ifndef INC_7_31_WINNINGTEAM_TEAMTEST_H
#define INC_7_31_WINNINGTEAM_TEAMTEST_H

#include <cxxtest/TestSuite.h>

//Include your classes header file(s) below and uncomment.
#include "Team.h"


class TeamTest : public CxxTest::TestSuite
{
private:

    Team team;

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested. CxxTest will automatically
    // test all functions beginning with 'test'
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.


    void testGetName()
    {
        std::string teamName = "Ballers";
        team.SetTeamName(teamName);
        TS_ASSERT_EQUALS(teamName, team.GetTeamName());
    }

    void testGetWins()
    {
        int wins = 10;
        team.SetTeamWins(wins);
        TS_ASSERT_EQUALS(wins, team.GetWins());
    }

    void testGetLosses()
    {
        int losses = 3;
        team.SetTeamLosses(losses);
        TS_ASSERT_EQUALS(losses, team.GetLosses());
    }

    void testGetWinPrecentage()
    {
        int wins = 10, losses = 3;
        team.SetTeamWins(wins);
        team.SetTeamLosses(losses);
        double winPrecentage = (double) wins / (wins + losses);
        TS_ASSERT_EQUALS(winPrecentage, team.GetWinPercentage());
    }

    void testPrintStanding()
    {
        int wins = 10, losses = 3;
        team.SetTeamWins(wins);
        team.SetTeamLosses(losses);
        team.PrintStanding();
    }

};


#endif //INC_7_31_WINNINGTEAM_TEAMTEST_H
