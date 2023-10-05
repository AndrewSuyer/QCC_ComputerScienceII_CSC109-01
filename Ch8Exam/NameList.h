/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch8 exam
 */


#ifndef CSC109CH08_09EXAM_NAMELIST_H
#define CSC109CH08_09EXAM_NAMELIST_H

#include "NameNode.h"

class NameList {
public:

    /// Set head and tail to nullptr
    NameList();

    /// Copy constructor
    NameList(const NameList& origList);

    /// Assignment operator
    NameList& operator=(const NameList& origList);

    /// Add the new node at the beginning of the linked list
    void push_front(NameNode* node);

    /// Add the new node at the end of the linked list
    void push_back(NameNode* node);

    /// Use printdata from NameNode to print out the linked list
    void print();

    /// Destructor of linked list. Call printdata() before you delete the node
    virtual ~NameList();

    /// @returns The tail node of the linked list
    NameNode* getTail() const;

    /// @returns The head node of the linked list
    NameNode* getHead() const;

private:

    NameNode* head;  // head of the linked list
    NameNode* tail;  // tail of the linked list

};


#endif //CSC109CH08_09EXAM_NAMELIST_H
