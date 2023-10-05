/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.31 Winning team
 */

#include "Team.h"

#include <iostream>

void Team::SetTeamName(const std::string& aName)
{
    name = aName;
}


void Team::SetTeamWins(int numWins)
{
    wins = numWins;
}


void Team::SetTeamLosses(int numLosses)
{
    losses = numLosses;
}


const std::string &Team::GetTeamName() const
{
    return name;
}


int Team::GetWins() const
{
    return wins;
}


int Team::GetLosses() const
{
    return losses;
}


void Team::PrintStanding() const
{
    // Print win percentage to 2 decimal places:
    double winPercentage = GetWinPercentage();
    std::printf("Win percentage: %0.2f\n", winPercentage);

    // Print if team has losing or winning average
    if (winPercentage < 0.5)
        std::cout << "Team " << name << " has a losing average." << std::endl;
    else
        std::cout << "Congratulations, Team " << name << " has a winning average!" << std::endl;
}


double Team::GetWinPercentage() const
{
    return (double) wins / (wins + losses);
}
