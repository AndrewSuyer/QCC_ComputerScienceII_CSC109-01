/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch9 exam
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include "Course.h"

//using namespace std;

// type your codee here
const std::vector<Student> &Course::GetRoster() const
{
    return roster;
}


Student Course::FindStudentHighestGpa()
{
    Student highest = roster.at(0);
    for (auto i = roster.begin(); i < roster.end(); ++i)
    {
        if (i->GetGPA() > highest.GetGPA())
            highest = *i;
    }
    return highest;
}


void Course::AddStudent(Student s)
{
    roster.push_back(s);
}


void Course::PassCourse(const std::string& fileName)
{
    std::cout << "Opening file " << fileName << std::endl;
    std::ofstream ofs(fileName);
    if (!ofs.is_open())
    {
        throw std::runtime_error("File could not be opened");
    }

    for (auto i = roster.begin(); i < roster.end(); ++i)
    {
        if (i->GetGPA() >= 75)
        {
            ofs << *i;
        }
    }
    ofs.close();
}


void Course::LoadFile(const std::string& fileName)
{
    std::ifstream ifs(fileName);
    if (!ifs.is_open())
    {
        throw std::runtime_error("Could not open file");
    }

    std::istringstream iss;
    std::string studentInfo;
    std::string fname, lname;
    double gpa;
    while (std::getline(ifs, studentInfo))
    {
        iss.str(studentInfo);
        iss >> fname >> lname >> gpa;

        Student student(fname, lname, gpa);
        roster.push_back(student);
        iss.clear();
    }

    ifs.close();
}


void Course::Print()
{
    for (const Student& student : roster)
    {
        std::cout << student;
    }
}


std::ostream &operator<<(std::ostream &out, const Course &s)
{
    for (const Student& student : s.roster)
    {
        out << student;
    }
    return out;
}


void Course::RemoveStudent(const Student &student)
{
    bool removed = false;
    for (auto i = roster.begin(); i < roster.end(); ++i)
    {
        if (*i == student)
        {
            removed = true;
            roster.erase(i);
            break;
        }
    }

    if (!removed)
    {
        throw std::runtime_error("Student not found in roster");
    }
}
