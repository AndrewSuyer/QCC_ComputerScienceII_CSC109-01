/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch 12 HW part B
 */

#ifndef NODE_H
#define NODE_H

#include <cstddef>

template <typename Item_Type>
class Node
{
public:
    
    // Constructor
    Node();

    /** Creates a new Node that points to another Node.
        @param data_item The data stored
        @param next_ptr Pointer to the Node that is
                        pointed to by the new Node
     */
    explicit Node(const Item_Type& data_item, Node* next_ptr = nullptr);
    
    // Copy constructor
    Node(const Node& orig);
    
    // Destructor
    virtual ~Node() = default;
    
    // accessor and mutator methods    
    void SetNext(Node* next);
    Node* GetNext() const;
    Node*& GetNext();
    void SetData(Item_Type data);
    Item_Type GetData() const;
    Item_Type& GetData();
    
private:

    /** The data */
    Item_Type data;

    /** The pointer to the next node. */
    Node* next;
};

// -------------------------- IMPLEMENTATIONS --------------------- //

template<typename Item_Type>
Item_Type &Node<Item_Type>::GetData()
{
    return data;
}


template<typename Item_Type>
Item_Type Node<Item_Type>::GetData() const
{
    return data;
}


template<typename Item_Type>
void Node<Item_Type>::SetData(Item_Type data)
{
    this->data = data;
}


template<typename Item_Type>
Node<Item_Type>* &Node<Item_Type>::GetNext()
{
    return next;
}


template<typename Item_Type>
Node<Item_Type>* Node<Item_Type>::GetNext() const
{
    return next;
}


template<typename Item_Type>
void Node<Item_Type>::SetNext(Node *next)
{
    this->next = next;
}


template<typename Item_Type>
Node<Item_Type>::Node(const Node &orig) :
    data(orig.data), next(nullptr)
{}


template<typename Item_Type>
Node<Item_Type>::Node() :
    data(), next(nullptr)
{}


template<typename Item_Type>
Node<Item_Type>::Node(const Item_Type &data_item, Node *next_ptr) :
        data(data_item), next(next_ptr)
{}


#endif /* NODE_H */

