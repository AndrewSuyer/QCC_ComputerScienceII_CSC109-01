/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include <iostream>
#include "Team.h"


Team::Team(const std::string &teamName, int wins, int losses) :
    teamName(teamName), wins(wins), losses(losses)
{

}


double Team::calcAvg() const
{
    if (wins + losses == 0)
        throw std::runtime_error("0/0 error");

    return (double) wins / (wins + losses);
}


void Team::print() const
{
    std::cout << teamName << " has " << wins << " wins and " << losses << " losses" << std::endl;
}


// Notice not a member of Team
std::ostream &operator<<(std::ostream &out, const Team &team)
{
    out << team.teamName << " - wins: " << team.wins << ", losses: " << team.losses;
    return out;
}


bool Team::operator<(const Team &team) const
{
    return this->teamName < team.teamName;
}


bool Team::operator>(const Team &team) const
{
    return this->teamName > team.teamName;
}


bool Team::operator==(const Team &team) const
{
    return this->teamName == team.teamName &&
            this->wins == team.wins &&
            this->losses == team.losses;
}
