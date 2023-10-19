/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef FILESTREAM_MANAGETEAMS_H
#define FILESTREAM_MANAGETEAMS_H

#include "Team.h"
#include <vector>
#include <fstream>

/// Gets information about Teams from a file and stores them in a vector.
class ManageTeams
{
    std::vector<Team> teams;

public:

    ManageTeams();

    /// Fills teams vector with Teams from a file
    /// @param fileName - path to file
    void readFile(const std::string& fileName);

    /// Writes to a file all the contents of the teams vector
    /// @param fileName - path to file
    void writeFile(const std::string& fileName);

    friend std::ostream& operator<<(std::ostream& out, const ManageTeams& manager);

    void sortTeams();

    const std::vector<Team>& getTeams() const;

    void print() const;

};


#endif // FILESTREAM_MANAGETEAMS_H
