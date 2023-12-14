#include <iostream>
#include <string>

#include "Instrument.h"
#include "StringInstrument.h"
#include "ElectricStrInstrument.h"

int main()
{
    Instrument<std::string, double, int> piano {"Piano", "Yamaha" ,"2023", 1999.99, 123456};
    StringInstrument<std::string, double, int, bool> violin {"Violin", "Yamaha", "2022", 999.99, 654321, 6, 8, false};
    ElectricStrInstrument<std::string, double, int, bool, int> electricGuitar {"Electric Guitar", "Rockstar Bands", "2023", 499.99, 154236, 5, 10, false, 120};

    piano.PrintInfo();
    violin.PrintInfo();
    electricGuitar.PrintInfo();

    return 0;
}
