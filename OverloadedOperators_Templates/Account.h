/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef OVERLOADEDOPERATORS_TEMPLATES_ACCOUNT_H
#define OVERLOADEDOPERATORS_TEMPLATES_ACCOUNT_H

#include <ostream>

/**
 * A generic Account representation. Account has an integer ID number
 * and generic currency type.
 * @tparam T - Currency type (int, double, or any numeric type)
 */
template<typename T>
class Account
{
    const unsigned int m_id;
    T m_balance;

public:

    explicit Account(unsigned int id, T balance = T());

    // Assignment operator (use parameter T)
    Account<T>& operator=(const Account<T>& a);

    void deposit(T amount);
    void withdraw(T amount);
    T balance() const;

    // Math operators:
    void operator+=(T amount);
    void operator-=(T amount);

    Account<T>& operator+(const Account<T>& a);
    Account<T>& operator-(const Account<T>& a);

    // Comparison operators (make sure parameter is type T)
    bool operator==(const Account<T>& a) const;
    bool operator>(const Account<T>& a) const;

    // Insertion operator (make separate typename T2 for parameter)
    template<typename T2>
    friend std::ostream& operator<<(std::ostream& out, const Account<T2>& a);

};



template<typename T>
Account<T>::Account(unsigned int id, T balance) :
        m_id(id), m_balance(balance)
{}


template<typename T>
Account<T>& Account<T>::operator=(const Account<T> &a)
{
    if (this != &a)
    {
        m_id = a.m_id;
        m_balance = a.m_balance;
    }

    return *this;
}


template<typename T>
void Account<T>::deposit(T amount)
{
    m_balance += amount;
}


template<typename T>
void Account<T>::withdraw(T amount)
{
    m_balance -= amount;
}


template<typename T>
T Account<T>::balance() const
{
    return m_balance;
}


template<typename T>
void Account<T>::operator+=(T amount)
{
    m_balance += amount;
}


template<typename T>
void Account<T>::operator-=(T amount)
{
    m_balance -= amount;
}


template<typename T>
Account<T>& Account<T>::operator+(const Account<T> &a)
{
    m_balance += a.m_balance;
    return *this;
}


template<typename T>
Account<T> &Account<T>::operator-(const Account<T> &a)
{
    m_balance -= a.m_balance;
    return *this;
}


template<typename T>
bool Account<T>::operator>(const Account<T>& a) const
{
    return m_balance > a.m_balance;
}


template<typename T>
bool Account<T>::operator==(const Account<T>& a) const
{
    return m_id == a.m_id &&
           m_balance == a.m_balance;
}


template<typename T2>
std::ostream &operator<<(std::ostream &out, const Account<T2> &a)
{
    out << "Id: " << a.m_id << ", balance: " << a.m_balance;
    return out;
}

#endif //OVERLOADEDOPERATORS_TEMPLATES_ACCOUNT_H
