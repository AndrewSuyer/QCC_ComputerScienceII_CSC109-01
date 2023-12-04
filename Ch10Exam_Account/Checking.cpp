/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */

#include "Checking.h"


Checking::Checking() :
    Account()
{}


Checking::Checking(double b) :
    Account(b)
{}


void Checking::daily_interest()
{
    // Earn interest on the balance that is more than $1000.
    // Interest rate is 3%
    // balance += ( balance - 1000 ) * 0.3 / DAYS_PER_MONTH
    double currentBalance = get_balance();
    double interest = 0;
    if (currentBalance > 1000)
    {
        currentBalance -= 1000;
        interest = 0.03 * currentBalance / DAYS_PER_MONTH;
        deposit(interest);
    }
}
