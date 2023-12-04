/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */

#include "Savings.h"


Savings::Savings() :
    Account()
{}


Savings::Savings(double b) :
    Account(b)
{}


void Savings::daily_interest()
{
    // Earn 6% interest on entire account balance.
    // balance += balance * 0.06 / DAYS_PER_MONTH
    double currentBalance = get_balance();
    double interest = 0.06 * currentBalance / DAYS_PER_MONTH;
    deposit(interest);
}
