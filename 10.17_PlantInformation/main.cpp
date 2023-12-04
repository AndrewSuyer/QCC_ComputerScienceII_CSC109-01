#include <iostream>
#include <vector>
#include "Plant.h"
#include "Flower.h"
#include "Garden.h"

using namespace std;

void PrintVector(const vector<Plant*>& vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << "Plant " << i + 1 << " Information:\n";
        vec.at(i)->PrintInfo();
        std::cout << '\n';
    }
}

int main()
{
//    vector<Plant*> myGarden;
//
//    string input;
//    string plantName, flowerName;
//    int plantCost, flowerCost;
//    std::string colorOfFlowers;
//    bool isAnnual;
//
//    cin >> input;   // plant or flower?
//
//    while (input != "-1")
//    {
//        if (input == "plant")
//        {
//            cin >> plantName;
//            cin >> plantCost;
//            Plant* plant = new Plant();
//            plant->SetPlantName(plantName);
//            plant->SetPlantCost(plantCost);
//            myGarden.push_back(plant);
//        }
//
//        if (input == "flower")
//        {
//            string isAnnualStr;
//            cin >> flowerName;
//            cin >> flowerCost;
//            cin >> isAnnualStr;
//            cin >> colorOfFlowers;
//
//            isAnnual = (isAnnualStr == "true");
//
//            Flower* flower = new Flower();
//            flower->SetPlantName(flowerName);
//            flower->SetPlantCost(flowerCost);
//            flower->SetPlantType(isAnnual);
//            flower->SetColorOfFlowers(colorOfFlowers);
//            myGarden.push_back(flower);
//        }
//
//        cin >> input;
//    }
//
//    PrintVector(myGarden);
//
//    for (size_t i = 0; i < myGarden.size(); ++i)
//    {
//        delete myGarden.at(i);
//    }

    Garden g;
    Plant p1;
    p1.SetPlantName("Cactus");
    p1.SetPlantCost(10);

    Plant p2;
    p2.SetPlantName("Tree");
    p2.SetPlantCost(100);

    Plant p3;
    p3.SetPlantName("Bush");
    p3.SetPlantCost(25);

    Flower f1;
    f1.SetPlantName("Rose");
    f1.SetPlantCost(5);
    f1.SetColorOfFlowers("Red");
    f1.SetPlantType(true);

    Flower f2;
    f2.SetPlantName("Tulip");
    f2.SetPlantCost(8);
    f2.SetColorOfFlowers("Purple");
    f2.SetPlantType(true);

    Flower f3;
    f3.SetPlantName("Daisy");
    f3.SetPlantCost(10);
    f3.SetColorOfFlowers("Yellow");
    f3.SetPlantType(false);

    g.Add(p1);
    g.Add(p2);
    g.Add(p3);
    g.Add(f1);
    g.Add(f2);
    g.Add(f3);

    g.Remove(f1);

    try
    {
        g.Remove(f1);
    }
    catch (const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Contains f1 (false): " << g.Contains(f1) << '\n';
    std::cout << "Contains p2: " << g.Contains(p2) << '\n';
    std::cout << "Contains f3: " << g.Contains(f3) << '\n';

    g.PrintInfo();
    std::cout << '\n';

    Plant* p_f1 = &f1;
    p_f1->PrintInfo();


    return 0;
}

