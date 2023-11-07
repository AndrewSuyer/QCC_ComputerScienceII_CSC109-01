/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.16 Book information
 */


#include "Encyclopedia.h"
#include <iostream>


const std::string &Encyclopedia::GetEdition() const
{
    return edition;
}


void Encyclopedia::SetEdition(const std::string &edition)
{
    Encyclopedia::edition = edition;
}


int Encyclopedia::GetNumPages() const
{
    return numPages;
}


void Encyclopedia::SetNumPages(int numPages)
{
    Encyclopedia::numPages = numPages;
}


void Encyclopedia::PrintInfo()
{
    Book::PrintInfo();
    std::cout << "   Edition: " << edition << '\n';
    std::cout << "   Number of Pages: " << numPages << '\n';
    std::cout << "   Number of Volumes: " << numVolumes << '\n';
}


int Encyclopedia::GetNumVolumes() const
{
    return numVolumes;
}


void Encyclopedia::SetNumVolumes(int num)
{
    numVolumes = num;
}
