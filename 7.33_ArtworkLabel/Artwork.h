/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.33 Artwork label
 */

#ifndef INC_7_33_ARTWORKLABEL_ARTWORK_H
#define INC_7_33_ARTWORKLABEL_ARTWORK_H


#include "Artist.h"

class Artwork
{
public:

    /// Constructs default artwork called "unknown" made in the year -1 by a default artist
    Artwork();

    Artwork(const std::string& title, int yearCreated, const Artist& artist);

    /// @returns the title of this artwork
    const std::string& GetTitle();

    /// @returns the year when this artwork was created
    int GetYearCreated();

    /// @prints information about this artwork and the artist who made it. This includes the
    /// title of the work and the year when it was created
    void PrintInfo();

private:

    std::string title;
    int yearCreated;

    Artist artist;

};

#endif //INC_7_33_ARTWORKLABEL_ARTWORK_H
