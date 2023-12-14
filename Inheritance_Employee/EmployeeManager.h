/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INHERITANCE_EMPLOYEE_EMPLOYEEMANAGER_H
#define INHERITANCE_EMPLOYEE_EMPLOYEEMANAGER_H

#include "EmployeePerson.h"

class EmployeeManager : public EmployeePerson
{
public:

    EmployeeManager();
    explicit EmployeeManager(int nManaged);
    EmployeeManager(std::string name, std::string depCode, std::string bday, int annualSalary,
                    int nManaged);

    int GetNumManaged();
    void PrintInfo() override;

    double calcMonthlySalary() override;

//    bool operator==(const EmployeeManager& em) const;
//    friend std::ostream& operator<<(std::ostream out, const EmployeeManager& em);

private:

    int numManaged;
    double monthlySalary;

};


#endif // INHERITANCE_EMPLOYEE_EMPLOYEEMANAGER_H
