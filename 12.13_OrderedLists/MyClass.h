/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INC_12_13_ORDEREDLISTS_MYCLASS_H
#define INC_12_13_ORDEREDLISTS_MYCLASS_H

#include <iostream>

using std::cout, std::endl;

template<typename T>
class MyClass
{
public:
    MyClass();
    ~MyClass();
    MyClass& operator=(const MyClass& objToCopy);

    template<typename T2>
    friend std::ostream& operator<<(std::ostream& out, const MyClass<T2>& c);

    bool operator==(const MyClass& c1) const;

    // Set member value dataObject
    void SetDataObject(const T setVal) {
        *dataObject = setVal;
    }

    // Return member value dataObject
    T GetDataObject() const {
        return *dataObject;
    }

private:
    T* dataObject;// Data member
};


// Default constructor
template<typename T>
MyClass<T>::MyClass()
{
    cout << "Constructor called." << endl;
    dataObject = new T; // Allocate mem for data
    *dataObject = 0;
}

// Destructor
template<typename T>
MyClass<T>::~MyClass() {
    cout << "Destructor called." << endl;
    delete dataObject;
}

// Assignment operator
template<typename T>
MyClass<T>& MyClass<T>::operator=(const MyClass<T>& objToCopy) {
    cout << "Assignment op called." << endl;

    if (this != &objToCopy) {           // 1. Don't self-assign
        delete dataObject;                  // 2. Delete old dataObject
        dataObject = new T;               // 3. Allocate new dataObject
        *dataObject = *(objToCopy.dataObject); // 4. Copy dataObject
    }

    return *this;
}

// Stream output operator
template<typename T2>
std::ostream& operator<<(std::ostream& out, const MyClass<T2>& c)
{
    out << *(c.dataObject);
    return out;
}

// Comparison operator
template<typename T>
bool MyClass<T>::operator==(const MyClass &c1) const
{
    *(this->dataObject) == *(c1.dataObject);
}

#endif //INC_12_13_ORDEREDLISTS_MYCLASS_H
