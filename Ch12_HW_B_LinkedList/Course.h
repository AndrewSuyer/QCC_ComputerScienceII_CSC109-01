/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 HW part B
 */

#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>

using std::string;

class Course
{
public:

    // Constructor
    Course();
    
    Course(string dept, double coursenum, string term, int sections, int seats);
    
    // copy constructor
    Course(const Course& orig);
    
    // assignment operator
    Course& operator=(const Course& orig);
    
    // == comparison operator
    bool operator==(const Course& orig);
    
    // != comparison operator
    bool operator!=(const Course& orig);
    
    // < comparison operator
    // compare course number
    bool operator<(const Course& orig) const;
    
    bool operator>=(const Course& orig) const;
    
    // override the insertion operator
    // return ostream in the following format.  Fields are separate
    // by space and newline at the end.
    // dept coursenum term sections course.seats 
    friend std::ostream& operator<<(std::ostream& out, const Course& course);
    
    virtual ~Course() {};  // not use
    
    // accessor and mutator methods
    void SetSeats(int seats);
    int GetSeats() const;
    void SetSections(int sections);
    int GetSections() const;
    void SetTerm(string term);
    string GetTerm() const;
    void SetCoursenum(double coursenum);
    double GetCoursenum() const;
    void SetDept(string dept);
    string GetDept() const;
    
private:

    string dept;
    double coursenum;
    string term;
    int sections;
    int seats;

};

#endif /* COURSE_H */

