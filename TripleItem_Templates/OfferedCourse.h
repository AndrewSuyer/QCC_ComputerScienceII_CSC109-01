/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef TRIPLEITEM_TEMPLATES_OFFEREDCOURSE_H
#define TRIPLEITEM_TEMPLATES_OFFEREDCOURSE_H

#include "Course.h"
#include <ostream>

template<typename T, typename S>
class OfferedCourse : public Course<T>
{
    std::string instructorName;
    std::string location;
    S classTime;
    std::string term;

public:

    OfferedCourse();
    OfferedCourse(T name, std::string title, std::string iName, std::string loc, S time, std::string term);

    bool operator==(const OfferedCourse<T, S>& c) const;

    const std::string& GetInstructorName() const;
    void SetInstructorName(const std::string& instructorName);

    const std::string& GetLocation() const;
    void SetLocation(const std::string& location);

    const S& GetClassTime() const;
    void SetClassTime(const S& classTime);

    const std::string& GetTerm() const;
    void SetTerm(const std::string& t);

    template<typename T2, typename S2>
    friend std::ostream& operator<<(std::ostream& out, const OfferedCourse<T2, S2>& c);
};


template<typename T, typename S>
bool OfferedCourse<T, S>::operator==(const OfferedCourse<T, S>& c) const
{
    return Course<T>::operator==(c) &&
            instructorName == c.instructorName &&
            location == c.location &&
            classTime == c.classTime &&
            term == c.term;
}


template<typename T, typename S>
OfferedCourse<T, S>::OfferedCourse() :
    Course<T>(), instructorName(), location(), classTime(), term()
{}


template<typename T, typename S>
OfferedCourse<T, S>::OfferedCourse(T name, std::string title, std::string iName, std::string loc, S time, std::string term) :
    Course<T>(name, std::move(title)), instructorName(std::move(iName)), location(std::move(loc)), classTime(time), term(std::move(term))
{}


template<typename T, typename S>
const std::string &OfferedCourse<T, S>::GetInstructorName() const
{
    return instructorName;
}


template<typename T, typename S>
void OfferedCourse<T, S>::SetInstructorName(const std::string &instructorName)
{
    this->instructorName = instructorName;
}


template<typename T, typename S>
const std::string &OfferedCourse<T, S>::GetLocation() const
{
    return location;
}


template<typename T, typename S>
void OfferedCourse<T, S>::SetLocation(const std::string &location)
{
    this->location = location;
}


template<typename T, typename S>
const S &OfferedCourse<T, S>::GetClassTime() const
{
    return classTime;
}


template<typename T, typename S>
void OfferedCourse<T, S>::SetClassTime(const S &classTime)
{
    this->classTime = classTime;
}


template<typename T, typename S>
const std::string &OfferedCourse<T, S>::GetTerm() const
{
    return term;
}


template<typename T, typename S>
void OfferedCourse<T, S>::SetTerm(const std::string &t)
{
    this->term = t;
}


template<typename T2, typename S2>
std::ostream &operator<<(std::ostream &out, const OfferedCourse<T2, S2> &c)
{
    out << "Course Information:\n";
    out << "   Course Number: " << c.courseNumber << '\n';
    out << "   Course Title: " << c.courseTitle << '\n';
    out << "   Instructor Name: " << c.instructorName << '\n';
    out << "   Location: " << c.location << '\n';
    out << "   Class Time: " << c.classTime << '\n';

    return out;
}

#endif //TRIPLEITEM_TEMPLATES_OFFEREDCOURSE_H
