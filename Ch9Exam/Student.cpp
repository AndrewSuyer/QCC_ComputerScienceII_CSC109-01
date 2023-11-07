/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch9 exam
 */

#include "Student.h"

// type your code here
Student::Student(const std::string& first, const std::string& last, double gpa) :
    first(first), last(last), gpa(gpa)
{}


double Student::GetGPA() const
{
    return gpa;
}


const std::string& Student::GetLast() const
{
    return last;
}


const std::string& Student::GetFirst() const
{
    return first;
}


std::ostream &operator<<(std::ostream &out, const Student& s)
{
    out << s.first << ' ' << s.last << ' ' << s.gpa << '\n';
    return out;
}


bool Student::operator==(const Student& s1)
{
    return this->first == s1.first &&
            this->last == s1.last &&
            this->gpa == s1.gpa;
}
