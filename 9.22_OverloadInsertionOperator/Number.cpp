/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.22 Overload operator<<
 */


#include "Number.h"

Number::Number(int number) :
    num(number)
{}


void Number::SetNum(int number)
{
    num = number;
}


int Number::GetNum() const
{
    return num;
}


std::ostream &operator<<(std::ostream &out, const Number &n)
{
    out << "The value is " << n.num << std::endl;
    return out;
}
