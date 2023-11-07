/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.15 Course information
 */


#ifndef INC_10_15_COURSEINFORMATION_COURSE_H
#define INC_10_15_COURSEINFORMATION_COURSE_H

#include <string>
using std::string;

class Course
{
    std::string courseNumber;
    std::string courseTitle;

public:

    const std::string &GetCourseNumber() const;
    void SetCourseNumber(const std::string &courseNumber);

    const std::string &GetCourseTitle() const;
    void SetCourseTitle(const std::string &courseTitle);

    void PrintInfo() const;
};


#endif // INC_10_15_COURSEINFORMATION_COURSE_H
