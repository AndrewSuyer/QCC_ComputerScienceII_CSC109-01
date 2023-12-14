/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INHERITANCE_EMPLOYEE_SUPERVISOR_H
#define INHERITANCE_EMPLOYEE_SUPERVISOR_H

#include "EmployeeManager.h"
#include "EmployeeStaff.h"

#define extends :

//#define ADD(x, y) x + y

class Supervisor extends public EmployeeManager, public EmployeeStaff
{
public:

    Supervisor() = default;

    double calcMonthlySalary() override;

private:



};


#endif // INHERITANCE_EMPLOYEE_SUPERVISOR_H
