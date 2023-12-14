/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INC_12_13_ORDEREDLISTS_ORDEREDLIST_H
#define INC_12_13_ORDEREDLISTS_ORDEREDLIST_H

#include <iostream>
#include <vector>

using std::cout, std::endl;

/* ----------- Template class OrderedList declaration ----------- */
template<typename TheType>
class OrderedList
{
public:
    int Size();                                 // Number of elements in the list
    TheType At(int index);                          // Return the element at index

    int Find(TheType value);                    // Return index of first occurrence
    // of value or -1 if not found
    void Insert(TheType value);                 // Insert value at its sorted index
    bool Remove(TheType value);                 // Find the first occurrence of value
    // and remove the value; true if success
    void Print();

private:
    std::vector<TheType> list;                       // Elements are stored in list
};


/* ----------- OrderedList function implementations ------------ */

template<typename TheType>
int OrderedList<TheType>::Size()
{
    return list.size();
}


template<typename TheType>
TheType OrderedList<TheType>::At(int index)
{
    return list.at(index);
}


template<typename TheType>
int OrderedList<TheType>::Find(TheType value)
{
    for (int i = 0; i < list.size(); ++i)
    {
        if (list[i] == value)
            return i;
    }

    return -1;
}


template<typename TheType>
void OrderedList<TheType>::Insert(TheType newItem)
{
    unsigned int j;                                // Vector size is unsigned int
    unsigned int k;                                // Vector size is unsigned int
    if (list.size() == 0)
    {
        list.push_back(newItem);
        return;
    }

    j = 0;
    while (j < list.size() && newItem > list.at(j))
    {
        ++j;
    }

    list.resize(list.size() + 1);

    // Now all items after index j are >= newItem
    if (j == list.size())
    {
        // If newItem is > last element, just add at end of list
        list.push_back(newItem);
    }
    else
    {
        // Now move backwards from the end of the list copying elements to
        // the next higher position; stop at j, where newItem will go
        for (k = list.size() - 1; k > j; --k)
            list.at(k) = list.at(k-1);

        // finally, insert newItem
        list.at(k) = newItem;
    }
}


// NOTE: Uses Find()
template<typename TheType>
bool OrderedList<TheType>::Remove(TheType oldItem)
{
    int index = Find(oldItem);

    if (index == -1)
        return false;

    list.erase(list.begin() + index);
    return true;
}

template<typename TheType>
void OrderedList<TheType>::Print()
{
    for (int j = 0; j < Size(); ++j)
    {
        cout << list.at(j);
        if (j < Size())
            cout << " ";                               // No end line after last element
    }
}


/* --------- End OrderedList function implementations ----------- */


#endif //INC_12_13_ORDEREDLISTS_ORDEREDLIST_H
