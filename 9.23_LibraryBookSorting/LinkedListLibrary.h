/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.23 Library book sorting
 */


#ifndef INC_9_23_LIBRARYBOOKSORTING_LINKEDLISTLIBRARY_H
#define INC_9_23_LIBRARYBOOKSORTING_LINKEDLISTLIBRARY_H


#include "BookNode.h"

class LinkedListLibrary
{
public:
    // Linked list node
    BookNode* headNode;

    LinkedListLibrary();

    ~LinkedListLibrary();

    int InsertSorted(BookNode* newNode, int counter);

    void PrintLibrary() const;
};


#endif // INC_9_23_LIBRARYBOOKSORTING_LINKEDLISTLIBRARY_H
