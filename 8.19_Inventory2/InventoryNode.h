/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.19 Inventory 2
 */


#ifndef INC_8_19_INVENTORY2_INVENTORYNODE_H
#define INC_8_19_INVENTORY2_INVENTORYNODE_H


#include <string>

class InventoryNode
{
private:

    std::string item;
    int numberOfItems;
    InventoryNode *nextNodeRef;

public:

    InventoryNode();
    InventoryNode(std::string itemInit, int numberOfItemsInit);
    InventoryNode(std::string itemInit, int numberOfItemsInit, InventoryNode* nextLoc);

    /// Inserts node b at the front of the list with head a
    /// @param a - head node
    /// @param b - new node
    void InsertAtFront(InventoryNode *a, InventoryNode *b);

    /// @returns next node after this one
    InventoryNode *GetNext();

    const std::string& GetItem() const;

    int GetNumberOfItems() const;

    void PrintNodeData();

};


#endif // INC_8_19_INVENTORY2_INVENTORYNODE_H
