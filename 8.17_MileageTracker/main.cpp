#include <iostream>
#include "MileageTrackerNode.h"

int main()
{
    // References for MileageTrackerNode objects
    MileageTrackerNode* headNode;
    MileageTrackerNode* currNode;
    MileageTrackerNode* lastNode;

    double miles;
    std::string date;
    int i;

    // Front of nodes list
    headNode = new MileageTrackerNode();
    lastNode = headNode;

    // TODO: Read in the number of nodes
    std::cin >> i;

    // TODO: For the read in number of nodes, read
    //       in data and insert into the linked list
    for (int j = 0; j < i; ++j)
    {
        // Get user input
        std::cin >> miles;
        std::cin >> date;

        currNode = new MileageTrackerNode(miles, date);
        lastNode->InsertAfter(currNode);
        lastNode = currNode;

        // TODO: Call the PrintNodeData() method
        //       to print the entire linked list
        currNode->PrintNodeData();
    }


    // MileageTrackerNode Destructor deletes all
    //       following nodes
    delete headNode;

    return 0;
}
