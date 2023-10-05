/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.19 Inventory 2
 */

#include "InventoryNode.h"
#include <iostream>


InventoryNode::InventoryNode() :
    item(""), numberOfItems(0), nextNodeRef(nullptr)
{

}


InventoryNode::InventoryNode(std::string itemInit, int numberOfItemsInit) :
    item(itemInit), numberOfItems(numberOfItemsInit), nextNodeRef(nullptr)
{

}


InventoryNode::InventoryNode(std::string itemInit, int numberOfItemsInit, InventoryNode *nextLoc) :
    item(itemInit), numberOfItems(numberOfItemsInit), nextNodeRef(nextLoc)
{

}


void InventoryNode::InsertAtFront(InventoryNode *a, InventoryNode *b)
{
    InventoryNode* temp = a->nextNodeRef;
    a->nextNodeRef = b;
    b->nextNodeRef = temp;

}


InventoryNode *InventoryNode::GetNext()
{
    return this->nextNodeRef;
}


void InventoryNode::PrintNodeData()
{
    std::cout << numberOfItems << " " << item << std::endl;
}


int InventoryNode::GetNumberOfItems() const
{
    return numberOfItems;
}


const std::string &InventoryNode::GetItem() const
{
    return item;
}
