/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INHERITANCE_EMPLOYEE_EMPLOYEESTAFF_H
#define INHERITANCE_EMPLOYEE_EMPLOYEESTAFF_H

#include "EmployeePerson.h"

#include <string>
using std::string;

class EmployeeStaff : public EmployeePerson
{
public:

    EmployeeStaff();
    explicit EmployeeStaff(string reportsTo);
    EmployeeStaff(std::string name, std::string depCode, std::string bday, int annualSalary,
                  std::string reportsTo, double hpw, double hr);

    string GetManagerName();
    void PrintInfo() override;

    double calcMonthlySalary() override;

    void setHoursPerWeek(double hpw) { hoursPerWeek = hpw; }
    double getHoursPerWeek() const { return hoursPerWeek; }

    void setHourlyRate(double hr) { hourlyRate = hr; }
    double getHourlyRate() const { return hourlyRate; }

private:

    string managerName;
    double hoursPerWeek;
    double hourlyRate;      // if >40, get 1.5x overtime pay
    double overtimePay;
};


#endif // INHERITANCE_EMPLOYEE_EMPLOYEESTAFF_H
