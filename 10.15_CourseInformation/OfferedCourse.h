/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.15 Course information
 */


#ifndef INC_10_15_COURSEINFORMATION_OFFEREDCOURSE_H
#define INC_10_15_COURSEINFORMATION_OFFEREDCOURSE_H

#include "Course.h"

class OfferedCourse : public Course
{
    std::string instructorName;
    std::string location;
    std::string classTime;
    std::string term;

public:

    const std::string &GetInstructorName() const;
    void SetInstructorName(const std::string &instructorName);

    const std::string &GetLocation() const;
    void SetLocation(const std::string &location);

    const std::string &GetClassTime() const;
    void SetClassTime(const std::string &classTime);

    const std::string& GetTerm() const;
    void SetTerm(const std::string& t);

};


#endif // INC_10_15_COURSEINFORMATION_OFFEREDCOURSE_H
