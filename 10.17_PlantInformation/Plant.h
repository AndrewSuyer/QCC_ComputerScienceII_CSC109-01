/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.17 Plant information
 */


#ifndef INC_10_17_PLANTINFORMATION_PLANT_H
#define INC_10_17_PLANTINFORMATION_PLANT_H

#include <string>
#include <ostream>

class Plant
{
public:

    virtual ~Plant();

    void SetPlantName(const std::string& userPlantName);
    const std::string& GetPlantName() const;

    void SetPlantCost(int userPlantCost);
    int GetPlantCost() const;

    virtual void PrintInfo() const;

    virtual bool operator==(const Plant& p) const;
    friend std::ostream& operator<<(std::ostream& out, const Plant& p);

protected:

    std::string plantName;
    int plantCost;
};


#endif // INC_10_17_PLANTINFORMATION_PLANT_H
