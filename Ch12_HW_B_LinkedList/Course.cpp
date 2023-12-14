#include "Course.h"     // Will this resolve the error?

/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 HW part B
 */

#include <utility>


Course::Course() :
    dept(), coursenum(0), term(), sections(0), seats(0)
{}


Course::Course(string dept, double coursenum, string term, int sections, int seats) :
    dept(std::move(dept)), coursenum(coursenum), term(std::move(term)), sections(sections), seats(seats)
{}


Course::Course(const Course &orig)
{
    dept = orig.dept;
    coursenum = orig.coursenum;
    term = orig.term;
    sections = orig.sections;
    seats = orig.seats;
}


Course &Course::operator=(const Course &orig)
{
    // CHECK THIS <-------------------------------------

    if (&orig != this)
    {
        dept = orig.dept;
        coursenum = orig.coursenum;
        term = orig.term;
        sections = orig.sections;
        seats = orig.seats;
    }

    return *this;
}


bool Course::operator==(const Course &orig)
{
    return dept == orig.dept &&
            coursenum == orig.coursenum &&
            term == orig.term &&
            sections == orig.sections &&
            seats == orig.seats;
}


bool Course::operator!=(const Course &orig)
{
    return !(*this == orig);
}


bool Course::operator<(const Course &orig) const
{
    return (coursenum < orig.coursenum);
}


bool Course::operator>=(const Course &orig) const
{
    return !(*this < orig);
}


std::ostream &operator<<(std::ostream &out, const Course &course)
{
    out << course.dept << ' '
        << course.coursenum << ' '
        << course.term << ' '
        << course.sections << ' '
        << course.seats << '\n';

    return out;
}


void Course::SetSeats(int seats)
{
    this->seats = seats;
}


int Course::GetSeats() const
{
    return seats;
}


void Course::SetSections(int sections)
{
    this->sections = sections;
}


int Course::GetSections() const
{
    return sections;
}


void Course::SetTerm(string term)
{
    this->term = std::move(term);
}


string Course::GetTerm() const
{
    return term;
}


void Course::SetCoursenum(double coursenum)
{
    this->coursenum = coursenum;
}


double Course::GetCoursenum() const
{
    return coursenum;
}


void Course::SetDept(string dept)
{
    this->dept = std::move(dept);
}


string Course::GetDept() const
{
    return dept;
}
