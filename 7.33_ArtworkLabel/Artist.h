/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.33 Artwork label
 */

#ifndef INC_7_33_ARTWORKLABEL_ARTIST_H
#define INC_7_33_ARTWORKLABEL_ARTIST_H


#include <string>

class Artist
{
public:

    /// Constructs default artist named "unknown" with birth and death year -1
    Artist();

    Artist(const std::string& artistName, int birthYear, int deathYear);

    /// @returns the name of this artist
    const std::string& GetName() const;

    /// @returns the year of birth of this artist
    int GetBirthYear() const;

    /// @returns the year of death of this artist. A value of -1 means this artist
    /// is still alive
    int GetDeathYear() const;

    /// @prints information about this artist, including their name, birth year, and
    /// death year (if applicable)
    void PrintInfo() const;

private:

    std::string artistName;
    int birthYear;
    int deathYear;
};


#endif //INC_7_33_ARTWORKLABEL_ARTIST_H
