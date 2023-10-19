/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include <iostream>
#include <sstream>
#include <algorithm>
#include "ManageTeams.h"


ManageTeams::ManageTeams() :
    teams()
{}


void ManageTeams::readFile(const std::string &fileName)
{
    std::ifstream ifs;
    ifs.open(fileName);

    // Use is_open to check if file was successfully opened
    if (!ifs.is_open())
    {
        std::cout << "Could not open file to read" << std::endl;
        return;
    }

    std::string teamName;
    int wins, losses;

    // Get the line (up to \n) and store it in teamName string
    std::getline(ifs, teamName);

    // Read until at the end of the file
    // fail() returns true if an extraction operation caused an error. This happens
    // when types are conflicting (char >> int)
    while (!ifs.fail())
    {
        ifs >> wins;

        // No wins specified (previous extraction failed)
        if (ifs.fail())
        {
//            std::cout << teamName << " has no wins or losses" << std::endl;
            wins = losses = 0;
        }
        // Wins are specified (previous extraction success)
        else
        {
            ifs >> losses;

            // If no loss number is provided, only use wins
            if (ifs.fail())
            {
//                std::cout << teamName << " has " << wins << " wins" << std::endl;
                losses = 0;
            }

            // Remove the newline (\n)
            ifs.ignore();
        }

        // Create Team object to store team data. Add team to vector
        Team team(teamName, wins, losses);
        teams.push_back(team);

        // Clear the state of the file stream (essential if there is an error)
        ifs.clear();
        std::getline(ifs, teamName);    // get the next line of the file
    }

}


void ManageTeams::writeFile(const std::string &fileName)
{
    std::ofstream ofs;
    ofs.open(fileName);
    if (!ofs.is_open())
    {
        std::cout << "Could not open file to write: " << fileName << ".txt" << std::endl;
        return;
    }

    // Insert team info into the file as well as the teams average
    for (const auto & team : teams)
    {
        try
        {
            ofs << team << ", average: " << team.calcAvg() << std::endl;
        } catch (std::runtime_error& e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    ofs.close();
}


std::ostream &operator<<(std::ostream &out, const ManageTeams &manager)
{
    for (const Team& team : manager.teams)
    {
        try
        {
            out << team << ", average: " << team.calcAvg() << std::endl;
        } catch (std::runtime_error& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return out;
}


void ManageTeams::print() const
{
    for (auto i = teams.begin(); i < teams.end(); ++i)
    {
        i->print();
    }
}


void ManageTeams::sortTeams()
{
    // Sorts from LEAST to GREATEST
    std::sort(teams.begin(), teams.end());
}


const std::vector<Team> &ManageTeams::getTeams() const
{
    return teams;
}

