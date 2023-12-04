/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */


#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

/*
 * create a class Checking that inherit from class Account.
 * 1. create a default constructor.
 * 2. create a non-default constructor that takes an initial balance.
 * 3. create a method that calculate the daily interest.  Add the daily interest
 * to the account balance.  Return none.
 * 
 */

class Checking : public Account
{
public:

    Checking();
    explicit Checking(double b);

    void daily_interest() override;
};




#endif /* CHECKING_H */

