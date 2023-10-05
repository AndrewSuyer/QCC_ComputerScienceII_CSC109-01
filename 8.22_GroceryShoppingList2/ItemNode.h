/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.21 Grocery shopping list 2
 */

#ifndef INC_8_22_GROCERYSHOPPINGLIST2_ITEMNODE_H
#define INC_8_22_GROCERYSHOPPINGLIST2_ITEMNODE_H

#include <string>

class ItemNode
{
private:

    std::string item;
    ItemNode* nextNodeRef;

public:

    // Default Constructor
    ItemNode();

    // Constructor
    explicit ItemNode(std::string itemInit);

    // Constructor
    ItemNode(std::string itemInit, ItemNode* nextLoc);

    // Insert node after this node.
    void InsertAfter(ItemNode* nodeLoc);

    // TODO: Define insertAtEnd() function that inserts a node
    //       to the end of the linked list
    void InsertAtEnd(ItemNode *a, ItemNode *b);

    // Get location pointed by nextNodeRef
    ItemNode* GetNext();

    std::string GetItem() const;

    void PrintNodeData();
};


#endif // INC_8_22_GROCERYSHOPPINGLIST2_ITEMNODE_H
