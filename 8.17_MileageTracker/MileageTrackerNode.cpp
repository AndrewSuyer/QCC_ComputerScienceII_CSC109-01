/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.17 Mileage tracker
 */

#include <string>
#include <iostream>
#include "MileageTrackerNode.h"


// Constructor
MileageTrackerNode::MileageTrackerNode()
{
    miles = 0.0;
    date = "";
    nextNodeRef = nullptr;
}

// Destructor
MileageTrackerNode::~MileageTrackerNode()
{
    if (nextNodeRef != nullptr)
    {
        delete nextNodeRef;
    }
}

// Constructor
MileageTrackerNode::MileageTrackerNode(double milesInit, std::string dateInit)
{
    miles = milesInit;
    date = dateInit;
    nextNodeRef = nullptr;
}

// Constructor
MileageTrackerNode::MileageTrackerNode(double milesInit, std::string dateInit, MileageTrackerNode* nextLoc)
{
    miles = milesInit;
    date = dateInit;
    nextNodeRef = nextLoc;
}

/* Insert node after this node.
Before: this -- next
After:  this -- node -- next
*/
void MileageTrackerNode::InsertAfter(MileageTrackerNode* nodeLoc)
{
    MileageTrackerNode* tmpNext;

    tmpNext = nextNodeRef;
    nextNodeRef = nodeLoc;
    nodeLoc->nextNodeRef = tmpNext;
}

// Get location pointed by nextNodeRef
MileageTrackerNode* MileageTrackerNode::GetNext()
{
    return nextNodeRef;
}

const std::string &MileageTrackerNode::GetDate() const
{
    return date;
}


double MileageTrackerNode::GetMiles() const
{
    return miles;
}


void MileageTrackerNode::PrintNodeData()
{
    std::cout << miles << ", " << date << std::endl;
}
