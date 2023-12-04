/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */

#include "Account.h"


Account::Account() :
    balance(0)
{}


Account::Account(double b) :
    balance(b)
{}


void Account::deposit(double amount)
{
    balance += amount;
}


void Account::withdraw(double amount)
{
    balance -= amount;
}


double Account::get_balance() const
{
    return balance;
}


void Account::daily_interest()
{
    // does nothing
}

