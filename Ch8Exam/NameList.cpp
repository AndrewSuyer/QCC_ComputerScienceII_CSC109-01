/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch8 exam
 */

#include "NameList.h"

#include <iostream>


NameList::NameList() :
    head(nullptr), tail(nullptr)
{}


NameList::NameList(const NameList &origList) :
    head(nullptr), tail(nullptr)
{
    NameNode* current = origList.head;
    while (current != nullptr)
    {
        NameNode* newNode = new NameNode(current->getName(), current->getAge());
        this->push_back(newNode);
        current = current->getNext();
    }
}


NameList &NameList::operator=(const NameList &origList)
{
    // Dont self assign
    if (this != &origList)
    {
        // Cycle through each node
        while (head != nullptr)
        {
            // Delete and move head up the list
            NameNode* temp = head->getNext();
            delete head;
            head = temp;
        }

        head = tail = nullptr;

        // Fill this list with identical nodes to origList
        NameNode* current = origList.head;
        while (current != nullptr)
        {
            NameNode* newNode = new NameNode(current->getName(), current->getAge());
            this->push_back(newNode);
            current = current->getNext();
        }
    }

    return *this;
}


void NameList::push_front(NameNode *node)
{
    // List is empty: set head and tail to node
    if (head == nullptr)
    {
        head = node;
        tail = node;
        return;
    }

    node->setNext(head);
    head = node;
}


void NameList::push_back(NameNode *node)
{
    // List is empty: set head and tail to node
    if (head == nullptr)
    {
        head = node;
        tail = node;
        return;
    }

    tail->setNext(node);
    tail = node;
}


void NameList::print()
{
    NameNode* current = head;
    while (current != nullptr)
    {
        current->printdata();
        current = current->getNext();
    }
}


NameList::~NameList()
{
    // Cycle through each node
    while (head != nullptr)
    {
        // Print data
        std::cout << "delete " << std::endl;
        head->printdata();

        // Delete and move head up the list
        NameNode* temp = head->getNext();
        delete head;
        head = temp;
    }
}


NameNode *NameList::getTail() const
{
    return tail;
}


NameNode *NameList::getHead() const
{
    return head;
}
