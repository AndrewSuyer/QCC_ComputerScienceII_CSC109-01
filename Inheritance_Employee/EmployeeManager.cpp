/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include "EmployeeManager.h"
#include <iostream>
#include <vector>

using namespace std;

// Default constructor
EmployeeManager::EmployeeManager()
{
    numManaged = 0;
    monthlySalary = 0;
}

// ***********************************************************************

// Constructor with parameters
EmployeeManager::EmployeeManager(int nManaged)
{
    numManaged = nManaged;
    monthlySalary = 0;
}

// ***********************************************************************

// Get the number of people managed
int EmployeeManager::GetNumManaged()
{
    return numManaged;
}


double EmployeeManager::calcMonthlySalary()
{
    monthlySalary = annualSalary / 12.0;
    return monthlySalary;
}

// ***********************************************************************

void EmployeeManager::PrintInfo()
{
    EmployeePerson::PrintInfo();
    cout << ", Staff managed: " << numManaged << endl;
}


EmployeeManager::EmployeeManager(std::string name, std::string depCode, std::string bday, int annualSalary, int managed) :
    EmployeePerson(std::move(name), std::move(depCode), std::move(bday), annualSalary),
    numManaged(managed), monthlySalary(0)
{}


std::ostream &operator<<(std::ostream out, const EmployeeManager &em)
{

}


//bool EmployeeManager::operator==(const EmployeeManager &em) const
//{
//    return EmployeePerson::operator==(em) &&
//            this->annualSalary == em.annualSalary;
//}
