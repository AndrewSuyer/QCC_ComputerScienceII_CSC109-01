/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 10 Exam: Account
 */

/* 
 * File:   Account.h
 * Author: hloi
 *
 * Created on April 22, 2018, 9:30 AM
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

//using namespace std;

// assume each month has thirty days.
const int DAYS_PER_MONTH = 30;

class Account
{
public:

   /*
    * create a default account constructor and set the balance to zero.
    */
   Account();

   /*
    * create a constructor that takes a balance as parameter.
    * Set the balance instance variable.
    */
   explicit Account(double b);


   /*
    * create a deposit method that takes a deposit amount as parameter.
    * increase the balance with the deposit amount.
    * return none.
    */
   void deposit(double amount);

   /*
    * create a withdraw method that takes a withdraw amount as parameter
    * reduce the balance with the withdraw amount
    * return none.   
    */
   void withdraw(double amount);


   /*
    * create a get_balance method that takes no parameter.
    * return the account balance.
    */
   double get_balance() const;

   virtual void daily_interest();

private:

   // account balance.
   double balance;

};


#endif /* ACCOUNT_H */

