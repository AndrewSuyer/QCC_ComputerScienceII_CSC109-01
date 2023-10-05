/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.31 Winning team
 */

#ifndef INC_7_31_WINNINGTEAM_TEAM_H
#define INC_7_31_WINNINGTEAM_TEAM_H

#include <string>

class Team
{
public:

    /// Sets this team's name
    /// @param aName team name
    void SetTeamName(const std::string& aName);

    /// Sets this team's number of wins
    /// @param numWins number of wins
    void SetTeamWins(int numWins);

    /// Sets this team's number of losses
    /// @param numLosses number of losses
    void SetTeamLosses(int numLosses);


    /// @returns This team's name
    const std::string& GetTeamName() const;

    /// @returns This team's win count
    int GetWins() const;

    /// @returns This team's loss count
    int GetLosses() const;


    /// Prints this team's winning percentage to 2 decimal point accuracy, and weather or
    /// or not the team has a winning or loosing average
    void PrintStanding() const;

    /// Calcuates and returns this team's win proportion using the equation
    /// wins / (wins + losses)
    /// @returns Winning percentage
    double GetWinPercentage() const;


private:

    /// Team name
    std::string name;

    /// Team win count
    int wins;

    /// Team loss count
    int losses;
};

#endif //INC_7_31_WINNINGTEAM_TEAM_H
