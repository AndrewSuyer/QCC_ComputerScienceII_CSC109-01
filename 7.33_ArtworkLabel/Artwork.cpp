/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.33 Artwork label
 */

#include "Artwork.h"
#include <iostream>

Artwork::Artwork() :
    title("unknown"), yearCreated(-1), artist()
{

}


Artwork::Artwork(const std::string& title, int yearCreated, const Artist& artist) :
    title(title), yearCreated(yearCreated), artist(artist)
{

}


const std::string& Artwork::GetTitle()
{
    return title;
}


int Artwork::GetYearCreated()
{
    return yearCreated;
}


void Artwork::PrintInfo()
{
    artist.PrintInfo();
    std::cout << "Title: " << title << ", " << yearCreated << std::endl;
}
