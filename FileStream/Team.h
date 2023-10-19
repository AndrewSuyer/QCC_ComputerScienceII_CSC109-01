/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef FILESTREAM_TEAM_H
#define FILESTREAM_TEAM_H

#include <string>

/// Stores information about a Team (names, wins, and losses)
class Team
{
    std::string teamName;
    int wins;
    int losses;

public:

    Team(const std::string& teamName = "", int wins = 0, int losses = 0);

    /// @returns the wins to games ratio
    double calcAvg() const;

    void print() const;

    /// Declare as a friend function, it is NOT a member of the class
    /// Function has access to private member variables of Team
    friend std::ostream& operator<<(std::ostream& out, const Team& team);

    // Comparison operators for comparing TEAM NAMES (in alphabetical order).
    // Used by the vector::sort() function
    bool operator<(const Team& team) const;
    bool operator>(const Team& team) const;

    bool operator==(const Team& team) const;

};


#endif // FILESTREAM_TEAM_H
