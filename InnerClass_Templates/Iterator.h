/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INNERCLASS_TEMPLATES_ITERATOR_H
#define INNERCLASS_TEMPLATES_ITERATOR_H

#include "SinglyLinkedList.h"

template<typename T>
class Iterator
{
    friend class SinglyLinkedList<T>;       // Gives Iterator access to private members of SinglyLinkedList

    /// Pointer to Node* in SinglyLinkedList
    typename SinglyLinkedList<T>::Node* current;

public:

    Iterator(const T& t);

    // Operators:
    const T& operator*() const;
    T* operator->() const;
    Iterator<T>& operator++();      // Post increment: i++
    Iterator<T>& operator++(int);   // Pre increment: ++i

};


template<typename T>
Iterator<T>::Iterator(const T &t)
{
    current->data = t;
}

// ---------- Implementations ---------- //

template<typename T>
const T& Iterator<T>::operator*() const
{
    return current->data;
}


template<typename T>
T *Iterator<T>::operator->() const
{
    return current;
}


template<typename T>
Iterator<T>& Iterator<T>::operator++()
{
    current = current->next;
    return *this;
}


template<typename T>
Iterator<T> &Iterator<T>::operator++(int)
{
    Iterator& r = *this;
    current = current->next;
    ++(*this);
    return r;
}


#endif // INNERCLASS_TEMPLATES_ITERATOR_H
