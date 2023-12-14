/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include "EmployeeStaff.h"
#include <iostream>

using namespace std;

// Default constructor
EmployeeStaff::EmployeeStaff()
{
    managerName = "";
    hoursPerWeek = 0;
    hourlyRate = 0;
    overtimePay = 0;
}

// ***********************************************************************

// Constructor with parameters
EmployeeStaff::EmployeeStaff(string reportsTo)
{
    managerName = reportsTo;
    hoursPerWeek = 0;
    hourlyRate = 0;
    overtimePay = 0;
}

// ***********************************************************************

// Get the name of the manager
string EmployeeStaff::GetManagerName()
{
    return managerName;
}

// ***********************************************************************

void EmployeeStaff::PrintInfo()
{
    EmployeePerson::PrintInfo();
    cout << ", Manager: " << GetManagerName() << endl;
}


double EmployeeStaff::calcMonthlySalary()
{
    const static int weeksPerMonth = 4;
    if (hoursPerWeek > 40)      // overtime
    {
        overtimePay = (hoursPerWeek - 40) * hourlyRate * 1.5;
    }
    return hourlyRate * hoursPerWeek * weeksPerMonth + overtimePay;
}


EmployeeStaff::EmployeeStaff(std::string name, std::string depCode, std::string bday, int annualSalary,
                             std::string reportsTo, double hpw, double hr) :
        EmployeePerson(std::move(name), std::move(depCode), std::move(bday), annualSalary),
        managerName(std::move(reportsTo)), hoursPerWeek(hpw), hourlyRate(hr)
{}
