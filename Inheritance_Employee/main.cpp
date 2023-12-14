#include <iostream>
#include <vector>

#include "EmployeeManager.h"
#include "EmployeeStaff.h"
#include "Supervisor.h"

int main()
{
    // Create the objects
    EmployeeManager manager(25);
    EmployeeStaff staff1("Michele");

    // Load data into the objects using the Person class function
    manager.SetData("Michele", "Sales", "03-03-1975", 70000);
    staff1.SetData("Bob",     "Sales", "02-02-1980", 50000);

    // Display the objects
    manager.PrintInfo();
    staff1.PrintInfo();

    // create manager and staff objects, print out their monthly pay
    std::vector<EmployeePerson*> employees;
    EmployeeManager* p1 = new EmployeeManager(3);
    p1->SetData("P1", "100", "January 1, 2000", 100000);
    EmployeeManager* p2 = new EmployeeManager(5);
    p2->SetData("P2", "200", "January 2, 2000", 150000);
    EmployeeManager* p3 = new EmployeeManager(7);
    p3->SetData("P3", "300", "January 3, 2000", 200000);
    EmployeeManager* p4 = new EmployeeManager(10);
    p4->SetData("P4", "400", "January 4, 2000", 250000);

    EmployeeStaff* p5 = new EmployeeStaff("P1");
    p5->SetData("P5", "100", "January 5, 2000", 80000);
    p5->setHourlyRate(20);
    p5->setHoursPerWeek(30);
    EmployeeStaff* p6 = new EmployeeStaff("P2");
    p6->SetData("P6", "200", "January 6, 2000", 90000);
    p6->setHourlyRate(30);
    p6->setHoursPerWeek(45);
    EmployeeStaff* p7 = new EmployeeStaff("P3");
    p7->SetData("P7", "300", "January 7, 2000", 100000);
    p7->setHourlyRate(25);
    p7->setHoursPerWeek(40);
    EmployeeStaff* p8 = new EmployeeStaff("P4");
    p8->SetData("P8", "400", "January 8, 2000", 110000);
    p8->setHourlyRate(42);
    p8->setHoursPerWeek(50);

    employees.push_back(p1);
    employees.push_back(p2);
    employees.push_back(p3);
    employees.push_back(p4);
    employees.push_back(p5);
    employees.push_back(p6);
    employees.push_back(p7);
    employees.push_back(p8);

    std::cout << std::endl;
    for (auto i = employees.begin(); i < employees.end(); ++i)
    {
        (*i)->PrintInfo();
        std::cout << "Employee monthly salary: $" << (*i)->calcMonthlySalary() << '\n';
        std::cout << std::endl;
    }

    Supervisor s1;

    std::cout << "*p1 == *p2: " << std::boolalpha << (*p1 == *p2) << '\n';
    std::cout << "*p2 == *p2: " << std::boolalpha << (*p2 == *p2) << '\n';
    std::cout << "*p1 == *p5: " << std::boolalpha << (*p1 == *p5) << '\n';
    std::cout << "*p6 == *p7: " << std::boolalpha << (*p6 == *p7) << '\n';

    std::cout << "*p1: " << *p1 << '\n';
    std::cout << "*p7: " << *p7 << '\n';


    return 0;
}
