/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef TRIPLEITEM_TEMPLATES_STUDENT_H
#define TRIPLEITEM_TEMPLATES_STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "OfferedCourse.h"
#include "ClassTime.h"

/**
 * Student with name and Id that takes OfferedCourses
 * @tparam T - Student ID type (int or string recommended)
 * @tparam S - Course number type (string or int recommended)
 * @tparam R - Class time type (ClassTime or string recommended)
 */
template<typename T, typename S, typename R>
class Student
{
    std::string name;
    T id;
    std::vector<OfferedCourse<S, R>> classes;

public:

    Student(std::string nm = "", T id = T());

    void addCourse(OfferedCourse<S, R> c);
    void deleteCourse(OfferedCourse<S, R> c);
    void printClasses() const;

};


template<typename T, typename S, typename R>
void Student<T, S, R>::printClasses() const
{
    for (const OfferedCourse<S, R>& c : classes)
        std::cout << c;
}


template<typename T, typename S, typename R>
void Student<T, S, R>::deleteCourse(OfferedCourse<S, R> c)
{
    for (auto i = classes.begin(); i < classes.end(); ++i)
        if (*i == c)
        {
            classes.erase(i);
            return;
        }
}


template<typename T, typename S, typename R>
Student<T, S, R>::Student(std::string nm, T id) :
        name(std::move(nm)), id(id)
{}


template<typename T, typename S, typename R>
void Student<T, S, R>::addCourse(OfferedCourse<S, R> c)
{
    classes.push_back(std::move(c));
}



#endif // TRIPLEITEM_TEMPLATES_STUDENT_H
