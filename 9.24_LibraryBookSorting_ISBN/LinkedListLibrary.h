/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */


#ifndef LINKEDLISTLIBRARYH
#define LINKEDLISTLIBRARYH

#include "BookNode.h"

class LinkedListLibrary
{
public:
    //Linked list nodes
    BookNode* headNode;
    BookNode* lastNode;

    LinkedListLibrary();

    ~LinkedListLibrary();

    int InsertSorted(BookNode* newNode, int counter);

    void PrintLibrary() const;
};

#endif
