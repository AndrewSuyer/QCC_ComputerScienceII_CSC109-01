/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef TRIPLEITEM_TEMPLATES_CLASSTIME_H
#define TRIPLEITEM_TEMPLATES_CLASSTIME_H


#include <string>
#include <ostream>

class ClassTime
{
    std::string day;
    std::string time;

public:

    ClassTime() = default;

    ClassTime(std::string d, std::string t);

    ClassTime(std::string dayTime);

    const std::string &getDay() const;
    void setDay(const std::string &day);

    const std::string &getTime() const;
    void setTime(const std::string &time);

    friend std::ostream& operator<<(std::ostream& out, const ClassTime& c);

};


#endif // TRIPLEITEM_TEMPLATES_CLASSTIME_H
