/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.33 Artwork label
 */

#include "Artist.h"
#include <iostream>
#include <string>

Artist::Artist() :
    artistName("unknown"), birthYear(-1), deathYear(-1)
{}


Artist::Artist(const std::string& artistName, int birthYear, int deathYear) :
    artistName(artistName), birthYear(birthYear), deathYear(deathYear)
{}


const std::string& Artist::GetName() const
{
    return artistName;
}


int Artist::GetBirthYear() const
{
    return birthYear;
}


int Artist::GetDeathYear() const
{
    return deathYear;
}


void Artist::PrintInfo() const
{
    std::cout << "Artist: " << artistName;

    // If birth year is known, print birth year
    if (birthYear > 0)
    {
       std::cout << " (" << birthYear << " to ";

       // Print death year if known, "present" otherwise
       if (deathYear > 0)
           std::cout << deathYear << ")" << std::endl;
       else
           std::cout << "present)" << std::endl;
    }
    // Unknown birth year:
    else
        std::cout << " (unknown)" << std::endl;
}
