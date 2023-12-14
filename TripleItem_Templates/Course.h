/*
 * Copyright 2023
 * Created by Andrew Suyer
 */

#ifndef TRIPLEITEM_TEMPLATES_COURSE_H
#define TRIPLEITEM_TEMPLATES_COURSE_H

#include <string>
#include <iostream>
#include <iostream>
#include <iostream>

template<typename T>
class Course
{
    T courseNumber;
    std::string courseTitle;

public:

    Course();
    Course(T courseNumber, std::string courseTitle);

    bool operator==(const Course& c) const;

    const T& GetCourseNumber() const;
    void SetCourseNumber(const T& courseNumber);

    const std::string& GetCourseTitle() const;
    void SetCourseTitle(const std::string& courseTitle);

    void PrintInfo() const;

    template<typename T2>
    friend std::ostream& operator<<(std::ostream& out, const Course<T2>& c);
};


template<typename T>
bool Course<T>::operator==(const Course &c) const
{
    return courseTitle == c.courseTitle &&
            courseNumber == c.courseNumber;
}


template<typename T>
Course<T>::Course() :
    courseNumber(), courseTitle()
{}


template<typename T>
Course<T>::Course(T courseNumber, std::string courseTitle) :
    courseNumber(courseNumber), courseTitle(std::move(courseTitle))
{}


template<typename T>
const T &Course<T>::GetCourseNumber() const
{
    return courseNumber;
}


template<typename T>
void Course<T>::SetCourseNumber(const T &courseNumber)
{
    this->courseNumber = courseNumber;
}


template<typename T>
const std::string &Course<T>::GetCourseTitle() const
{
    return courseTitle;
}


template<typename T>
void Course<T>::SetCourseTitle(const std::string &courseTitle)
{
    this->courseTitle = courseTitle;
}


template<typename T>
void Course<T>::PrintInfo() const
{
    std::cout << "Course Information:\n";
    std::cout << "   Course Number: " << courseNumber << '\n';
    std::cout << "   Course Title: " << courseTitle << '\n';
}


template<typename T2>
std::ostream &operator<<(std::ostream &out, const Course<T2> &c)
{
    out << "Course Information:\n";
    out << "   Course Number: " << c.courseNumber << '\n';
    out << "   Course Title: " << c.courseTitle << '\n';
    return out;
}

#endif //TRIPLEITEM_TEMPLATES_COURSE_H
