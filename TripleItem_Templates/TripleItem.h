/*
 * Copyright 2023
 * Created by Andrew Suyer
 */

#ifndef TRIPLEITEM_TEMPLATES_TRIPLEITEM_H
#define TRIPLEITEM_TEMPLATES_TRIPLEITEM_H

#include <iostream>
#include <sstream>

using std::ostream, std::cout, std::endl;

template<typename TheType>
class TripleItem
{
public:

    explicit TripleItem(TheType i1 = 0, TheType i2 = 0, TheType i3 = 0);
    void PrintAll() const;      // Print all data member values
    TheType MinItem() const;    // Return min data member value


    /// Overloading stream output operator:
    /// Define a new template name different from the one used by the class
    template<typename T>                    //               \/ ---- use newly defined type here
    friend ostream& operator<<(ostream& out, const TripleItem<T>& t);

private:

    TheType item1;           // Data value 1
    TheType item2;           // Data value 2
    TheType item3;           // Data value 3
};


// Definition uses the temporary type that is different from the one that the class uses
template<typename T>
ostream& operator<<(ostream& out, const TripleItem<T>& t)
{
    out << '(' << t.item1 << ',' << t.item2 << ',' << t.item3 << ')';
    return out;
}



/*
 * Implementations for a templated class' functions need to be in the same .h file as the class:
 */

template<typename TheType>
TripleItem<TheType>::TripleItem(TheType i1, TheType i2, TheType i3)
{
    item1 = i1;
    item2 = i2;
    item3 = i3;
}


/// Print all data member values
template<typename TheType>
void TripleItem<TheType>::PrintAll() const
{
    cout << "(" << item1 << "," << item2
         << "," << item3 << ")" << endl;
}


/// Return min data member value
template<typename TheType>
TheType TripleItem<TheType>::MinItem() const
{
    TheType minVal = item1; // Holds value of min item, init to first item

    if (item2 < minVal)
    {
        minVal = item2;
    }
    if (item3 < minVal)
    {
        minVal = item3;
    }

    return minVal;
}


#endif //TRIPLEITEM_TEMPLATES_TRIPLEITEM_H
