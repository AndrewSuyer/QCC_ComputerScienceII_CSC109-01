/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.21 Grocery shopping list 2
 */

#include <iostream>
#include "ItemNode.h"


ItemNode::ItemNode() :
    item(""), nextNodeRef(nullptr)
{

}


ItemNode::ItemNode(std::string itemInit) :
    item(itemInit), nextNodeRef(nullptr)
{

}


ItemNode::ItemNode(std::string itemInit, ItemNode *nextLoc) :
    item(itemInit), nextNodeRef(nextLoc)
{

}


void ItemNode::InsertAfter(ItemNode *nodeLoc)
{
    ItemNode* temp = nodeLoc->nextNodeRef;
    nodeLoc->nextNodeRef = this;
    this->nextNodeRef = temp;
}


void ItemNode::InsertAtEnd(ItemNode *a, ItemNode *b)
{
    b->nextNodeRef = this;
}


ItemNode *ItemNode::GetNext()
{
    return this->nextNodeRef;
}


std::string ItemNode::GetItem() const
{
    return item;
}


void ItemNode::PrintNodeData()
{
    std::cout << item << std::endl;
}
