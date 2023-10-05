/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 8.17 Mileage tracker
 */


#ifndef INC_8_17_MILEAGETRACKER_MILEAGETRACKERNODE_H
#define INC_8_17_MILEAGETRACKER_MILEAGETRACKERNODE_H


class MileageTrackerNode
{
public:
    // Constructor
    MileageTrackerNode();

    // Destructor
    ~MileageTrackerNode();

    // Constructor
    MileageTrackerNode(double milesInit, std::string dateInit);

    // Constructor
    MileageTrackerNode(double milesInit, std::string dateInit, MileageTrackerNode* nextLoc);

    /* Insert node after this node.
    Before: this -- next
    After:  this -- node -- next
    */
    void InsertAfter(MileageTrackerNode* nodeLoc);

    // Get location pointed by nextNodeRef
    MileageTrackerNode* GetNext();

    const std::string& GetDate() const;

    double GetMiles() const;

    void PrintNodeData();

private:

    double miles;                       // Node data
    std::string date;                   // Node data
    MileageTrackerNode* nextNodeRef;    // Reference to the next node
};


#endif // INC_8_17_MILEAGETRACKER_MILEAGETRACKERNODE_H
