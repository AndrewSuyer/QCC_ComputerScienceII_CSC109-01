/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 HW part B
 */

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H
#include "Node.h"

/*<programming_project chapter="4" number="1">*/

#include <stdexcept>

/** Class to implement a single linked list */
template <typename Item_Type>
class Single_Linked_List
{
public:

    /** Construct an empty Single_Linked_List */
    Single_Linked_List() :
        head(nullptr), tail(nullptr), num_items(0)
    {}

    /** destructor */
    ~Single_Linked_List();
    
    /** Insert an item at the front of the list
        @param item The item to be inserted
     */
    void push_front(const Item_Type& item);

    /** Insert an item at the end of the list
        @param item The item to be inserted
     */
    void push_back(const Item_Type& item);

    /** Remove the front item of the list 
     * If it is empty list, throw out_of_range with a message 
     * "pop_front on empty list"
     */
    void pop_front();

    /** Remove the last item of the list 
     * If it is empty list, throw out_of_range with a message 
     * "pop_back on empty list"
     */
    void pop_back();

    /** Return a reference to the front item of the list
     * If it is empty list, throw out_of_range with a message 
     * "Attempt to take front of empty list")
        @return A reference to the front item of the list
     */
    Item_Type& front();

    /** Return a const reference to the front item of the list
     * If it is empty list, throw out_of_range with a message 
     * "Attempt to take front of empty list")

        @return A const reference to the front item of the list
     */
    const Item_Type& front() const;

    /** Return a reference to the back item of the list
     * If it is empty list, throw out_of_range with a message 
     * "Attempt to take back of empty list")
        @return A reference to the back item of the list
     */
    Item_Type& back();

    /** Return a const reference to the back item of the list
        @return A const reference to the back item of the list
     */
    const Item_Type& back() const;

    /** Determine if the list is empty
     * If it is empty list, throw out_of_range with a message 
     * "Attempt to take back of empty list")
        @return true if the list is empty
     */
    bool empty() const
    {
        return num_items == 0;
    }

    /** Return the number of items in the list
        @return The number of items in the list
     */
    size_t size() const
    {
        return num_items;
    }

    /** Insert item at position index (starting at 0).  Insert
        at the end if index is beyond the end of the list.
        @param index The position to insert the item
        @param item The item to be inserted
     */
    void insert(size_t index, const Item_Type& item);

    /** function to insert a new_node in a sorted list. 
     Insert the new_node in sorted order.
     * @parm new_node Node to be inserted into the sorted linked list.
     */
    void sortedInsert(Item_Type& item);

    /** Return a reference to the item at position index
     *  If index > size, throw a message 
     * "Attempt to get past size in Single_Linked_List"
        @param index The index of the item
        @return A reference to the item at index
     */
    Item_Type& get(size_t index);

    /** Return a const reference to the item at position index
        @param index The index of the item
        @return A const reference to the item at index
     */
    const Item_Type& get(size_t index) const;


    /** Remove the item at position index.
     * If index > size, throw a message 
     * "Attempt to get past size in Single_Linked_List"
        @return true if the removal is sucessful; false if index is
        beyond the end of the list
     */
    bool remove(size_t index);

    /** Return the position of the first occurence of item.
     * If item is not found, throw an "item not found" exception
     * Note: this is a char* exception
        @return The position of the first occurence of the item. Return
        the size of the list if it is not found
     */
    size_t find(const Item_Type& item);

private:

    Node<Item_Type>* head;
    Node<Item_Type>* tail;
    size_t num_items;

};


template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type &item)
{
    Node<Item_Type>* current = head;
    size_t index = 0;
    while (current != nullptr && current->GetData() != item)
    {
        current = current->GetNext();
        ++index;
    }

    if (current == nullptr)
        throw "item not found";

    else
        return index;
}


template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index)
{
    if (index >= num_items)
    {
        throw std::out_of_range("Attempt to get past size in Single_Linked_List");
//        return false;
        // function returns false here even though this is unreachable \_(^^)_/
    }

    if (index == 0)
    {
        pop_front();
        return true;
    }

    // Remove last element
    if (index == num_items - 1)
    {
        pop_back();
        return true;
    }

    Node<Item_Type>* before = head;
    Node<Item_Type>* current = before->GetNext();
    for (size_t i = 1; i < index; ++i)
    {
        before = before->GetNext();
        current = current->GetNext();
    }

    Node<Item_Type>* next = current->GetNext();
    before->SetNext(next);
    delete current;

    --num_items;
    return true;
}


template<typename Item_Type>
const Item_Type &Single_Linked_List<Item_Type>::get(size_t index) const
{
    if (index > num_items)
        throw std::out_of_range("Attempt to get past size in Single_Linked_List");

    Node<Item_Type>* current = head;
    for (size_t i = 0; i < index; ++i)
    {
        current = current->GetNext();
    }

    return current->GetData();
}


template<typename Item_Type>
Item_Type &Single_Linked_List<Item_Type>::get(size_t index)
{
    if (index > num_items)
        throw std::out_of_range("Attempt to get past size in Single_Linked_List");

    Node<Item_Type>* current = head;
    for (size_t i = 0; i < index; ++i)
    {
        current = current->GetNext();
    }

    return current->GetData();
}


template<typename Item_Type>
void Single_Linked_List<Item_Type>::sortedInsert(Item_Type& item)
{
    // Insert at front of list if list is empty or item goes before head
    if (head == nullptr || item < head->GetData())
    {
        push_front(item);
        return;
    }

    // Iterate through list until new item node goes between 'before' and 'current'
    // ... -> before -> newNode -> current -> ...
    // AKA: when current becomes greater than new node
    Node<Item_Type>* before = head;
    Node<Item_Type>* current = before->GetNext();
    while (current != nullptr && current->GetData() < item)
    {
        before = before->GetNext();
        current = current->GetNext();
    }

    auto newNode = new Node<Item_Type>(item, current);
    before->SetNext(newNode);
//    newNode->SetNext(current);

    ++num_items;
}


template<typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type &item)
{
    // Insert at front of list if index is 0 or list is empty
    if (index == 0 || head == nullptr)
    {
        push_front(item);
        return;
    }

    // Find node before point of insert (i represents index of current):
    Node<Item_Type>* before = head;
    Node<Item_Type>* current = before->GetNext();
    for (size_t i = 1; current != nullptr && i < index; ++i)
    {
        before = before->GetNext();
        current = current->GetNext();
    }

    auto node = new Node<Item_Type>(item, current);
    before->SetNext(node);

    // Special case: node gets inserted at end
    if (node->GetNext() == nullptr)
    {
        tail = node;
    }

    ++num_items;
}


template<typename Item_Type>
const Item_Type &Single_Linked_List<Item_Type>::back() const
{
    // List is empty
    if (head == nullptr)
        throw std::out_of_range("Attempt to take front of empty list");

    return tail->GetData();
}


template<typename Item_Type>
Item_Type &Single_Linked_List<Item_Type>::back()
{
    // List is empty
    if (head == nullptr)
        throw std::out_of_range("Attempt to take back of empty list");

    return tail->GetData();
}


template<typename Item_Type>
const Item_Type &Single_Linked_List<Item_Type>::front() const
{
    // List is empty
    if (head == nullptr)
        throw std::out_of_range("Attempt to take front of empty list");

    return head->GetData();
}


template<typename Item_Type>
Item_Type &Single_Linked_List<Item_Type>::front()
{
    // List is empty
    if (head == nullptr)
        throw std::out_of_range("Attempt to take front of empty list");

    return head->GetData();
}


template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back()
{
    // List is empty
    if (head == nullptr)
        throw std::out_of_range("pop_back on empty list");

    // List has 1 element
    if (head->GetNext() == nullptr)
    {
        delete head;
        head = tail = nullptr;
        num_items = 0;
        return;
    }

    // Find node before tail node:
    Node<Item_Type>* current = head;
    while (current->GetNext() != tail)
        current = current->GetNext();

    delete current->GetNext();
    current->SetNext(nullptr);
    tail = current;
    --num_items;
}


template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front()
{
    // list is empty
    if (head == nullptr)
        throw std::out_of_range("pop_front on empty list");

    Node<Item_Type>* temp = head->GetNext();
    delete head;
    head = temp;
    --num_items;
}


template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type &item)
{
    auto node = new Node<Item_Type>(item);

    // list is empty:
    if (head == nullptr)
    {
        head = tail = node;
        ++num_items;
        return;
    }

    tail->SetNext(node);
    tail = node;
    ++num_items;
}


template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type &item)
{
    auto node = new Node<Item_Type>(item, head);
    head = node;
    ++num_items;

    if (node->GetNext() == nullptr)
        tail = node;
}


template<typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List()
{
    while (head != nullptr)
    {
        Node<Item_Type>* temp = head->GetNext();
        delete head;
        head = temp;
    }

    num_items = 0;
}

/**
 * implement the functions that specified in this header file to the section 
 * in below or put them in a separate file.  If you decide to put the code in
 * a separate file, don't use .cpp extension.
 */

//#include "Single_Linked_List.tpp"

#endif /* SINGLE_LINKED_LIST_H */

