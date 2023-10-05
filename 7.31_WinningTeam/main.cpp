/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.31 Winning team
 */

#include <iostream>
#include <string>

#include "Team.h"

using namespace std;

int main()
{
    // Input trackers:
    string name;
    int wins;
    int losses;
    Team team;

    // Getting user input:
    cin >> name;
    cin >> wins;
    cin >> losses;

    // Setting team attributes:
    team.SetName(name);
    team.SetWins(wins);
    team.SetLosses(losses);

    team.PrintStanding();

    return 0;
}
