/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef INNERCLASS_TEMPLATES_SINGLYLINKEDLIST_H
#define INNERCLASS_TEMPLATES_SINGLYLINKEDLIST_H

//#include "Iterator.h"

template<typename T>
class SinglyLinkedList
{
//    friend class Iterator<T>;     // Gives Iterator access to private members of SinglyLinkedList

    struct Node
    {
        T data;
        Node* next;

        Node(const T& data, Node* next = nullptr);

    };

    Node* head;
    Node* tail;

public:

    SinglyLinkedList();

    void pushBack(const T& t);

};


template<typename T>
void SinglyLinkedList<T>::pushBack(const T &t)
{
    Node* node = new Node(t);

    // List is empty
    if (head == nullptr)
    {
        head = tail= node;
    }

}


// ---------- Node Implementations ---------- //


template<typename T>
SinglyLinkedList<T>::Node::Node(const T &data, SinglyLinkedList::Node *next) :
        data(data), next(next)
{}


// ---------- Linked List Implementations ---------- //


template<typename T>
SinglyLinkedList<T>::SinglyLinkedList() :
    head(nullptr), tail(nullptr)
{}


#endif // INNERCLASS_TEMPLATES_SINGLYLINKEDLIST_H
