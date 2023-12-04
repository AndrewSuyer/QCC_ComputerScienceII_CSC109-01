/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.17 Plant information
 */


#ifndef INC_10_17_PLANTINFORMATION_FLOWER_H
#define INC_10_17_PLANTINFORMATION_FLOWER_H

#include "Plant.h"

class Flower : public Plant
{
public:

    void SetPlantType(bool userIsAnnual);
    bool GetPlantType() const;

    void SetColorOfFlowers(const std::string& userColorOfFlowers);
    const std::string& GetColorOfFlowers() const;

    void PrintInfo() const override;

    bool operator==(const Flower& f) const;
    friend std::ostream& operator<<(std::ostream& out, const Flower& f);

private:

    bool isAnnual;
    std::string colorOfFlowers;
};


#endif // INC_10_17_PLANTINFORMATION_FLOWER_H
