/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch9 exam
 */

#ifndef CSC109CH09EXAM1_STUDENT_H
#define CSC109CH09EXAM1_STUDENT_H


#include <string>
#include <ostream>

//using namespace std;

// Class representing a student
class Student
{
public:

    /**
     * Initialize first, last, and gpa
     * @param first
     * @param last
     * @param gpa
     */
    Student(const std::string& first, const std::string& last, double gpa);  // student constructor (4 points)


    /**
     * @return gpa
     */
    double GetGPA() const; // return gpa (2 points)


    /**
     * @return last
     */
    [[nodiscard]] const std::string& GetLast() const; // return last name (2 points)


    /**
     * @return first
     */
    const std::string& GetFirst() const; // return first name (2 points)


    /**
     * override stream operator<< with first, last, gpa separate with a space (10 points)
     * @param out
     * @param s
     * @return ostream
     * See course.txt for output format
     * You will need to use this stream operator<< for Print and PassCourse functions
     * in Course.h to get full credits.
     */
    friend std::ostream& operator<<(std::ostream &out, const  Student& s);

    /**
     * Overload opeator== to check if two student objects are equal (5 points)
     * @param s1
     * @return
     */
    bool operator==(const Student& s1);

private:

    std::string first;  // first name
    std::string last;   // last name
    double gpa;    // grade point average
};


#endif //CSC109CH09EXAM1_STUDENT_H
