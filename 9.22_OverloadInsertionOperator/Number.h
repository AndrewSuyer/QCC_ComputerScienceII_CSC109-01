/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.22 Overload operator<<
 */

#ifndef INC_9_22_OVERLOADOPERATOR_NUMBER_H
#define INC_9_22_OVERLOADOPERATOR_NUMBER_H

#include <ostream>

class Number
{
public:

    explicit Number(int);

    void SetNum(int);

    int GetNum() const;

    /// Declared as a friend function to give operator<< private member access
    friend std::ostream& operator<<(std::ostream &out, const Number& n);

private:

    int num;
};


#endif // INC_9_22_OVERLOADOPERATOR_NUMBER_H
