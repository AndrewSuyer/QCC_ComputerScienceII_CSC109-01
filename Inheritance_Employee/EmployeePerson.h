/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INHERITANCE_EMPLOYEE_EMPLOYEEPERSON_H
#define INHERITANCE_EMPLOYEE_EMPLOYEEPERSON_H

#define foreach(i, c) for(const i& iterator : c)

#include <string>
using std::string;

/**
 * Abstract class. Must implement calcMonthlySalary(). Should implement default implementation
 * of PrintInfo()
 */
class EmployeePerson
{
public:
    EmployeePerson();
    EmployeePerson(string empFullName, string empDepartmentCode,
                   string empBirthday, int empAnnualSalary);
    void SetData(string empFullName, string empDepartmentCode,
                 string empBirthday, int empAnnualSalary);

    virtual void PrintInfo();

    virtual double calcMonthlySalary() = 0;

    /// Compares the names of the EmployeeManagers
    virtual bool operator==(const EmployeePerson& ep) const;

    friend std::ostream& operator<<(std::ostream& out, const EmployeePerson& o);

protected:

    string fullName;     // Format: last name, first name
    string departmentCode;
    string birthday;
    int annualSalary;
};


#endif // INHERITANCE_EMPLOYEE_EMPLOYEEPERSON_H
