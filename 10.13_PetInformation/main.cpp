#include <iostream>

#include "Pet.h"
#include "Cat.h"

/*
 * Get user input information about a generic Pet and Cat object.
 * Test PrintInfo() on both objects
 */

int main()
{
    Pet pet;
    Cat cat;
    std::string name, breed;
    int age = 0;

//    std::cout << "Enter pet name and age (on separate lines)\n";
    std::getline(std::cin, name);
    std::cin >> age;
    std::cin.ignore();
    pet.SetName(name);
    pet.SetAge(age);

//    std::cout << "Enter cat name, age, and breed (on separate lines)\n";
    std::getline(std::cin, name);
    std::cin >> age;
    std::cin.ignore();
    std::getline(std::cin, breed);
    cat.SetName(name);
    cat.SetAge(age);
    cat.SetBreed(breed);

    pet.PrintInfo();
    cat.PrintInfo();

    return 0;
}
