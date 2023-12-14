/*
 * Copyright 2023
 * Created by Andrew Suyer
 */

#include "EmployeePerson.h"
#include <iostream>

using namespace std;

// Default constructor. Set protected member variables to the empty string or 0
EmployeePerson::EmployeePerson() {
    fullName       = "";
    departmentCode = "";
    birthday       = "";
    annualSalary   = 0;
}

// ***********************************************************************

// Constructor with parameters to set the private member variables
EmployeePerson::EmployeePerson(string empFullName, string empDepartmentCode,
                               string empBirthday, int empAnnualSalary) {
    SetData(empFullName, empDepartmentCode, empBirthday, empAnnualSalary);
}

// ***********************************************************************

void EmployeePerson::SetData(string empFullName, string empDepartmentCode,
                             string empBirthday, int empAnnualSalary) {
    fullName       = empFullName;
    departmentCode = empDepartmentCode;
    birthday       = empBirthday;
    annualSalary   = empAnnualSalary;
}

// ***********************************************************************

void EmployeePerson::PrintInfo() {
    cout << "Name: " << fullName << ", Department: " << departmentCode
         << ", Birthday: " << birthday << ", Salary: " << annualSalary;
}


bool EmployeePerson::operator==(const EmployeePerson &ep) const
{
    return this->fullName == ep.fullName;
}


std::ostream &operator<<(ostream &out, const EmployeePerson &o)
{
    out << "Name: " << o.fullName << ", Department: " << o.departmentCode
        << ", Birthday: " << o.birthday << ", Salary: " << o.annualSalary;
    return out;
}
