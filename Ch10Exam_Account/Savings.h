/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */


#ifndef SAVINGS_H
#define SAVINGS_H


#include "Account.h"

/*
 * create a class Savings that inherit from class Account.
 * 1. create a default constructor.
 * 2. create a non-default constructor that takes an initial balance.
 * 3. create a method that calculate the daily interest.  Add the daily interest
 * to the account balance.  Return none.
 * 
 */

class Savings : public Account
{
public:

    Savings();
    explicit Savings(double b);

    void daily_interest() override;
};


#endif /* SAVINGS_H */

