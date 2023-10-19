/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */


#include "LinkedListLibrary.h"
#include <iostream>

using std::cout, std::endl;

LinkedListLibrary::LinkedListLibrary() {
   // Front of nodes list
   headNode = nullptr;
   lastNode = nullptr;
}

LinkedListLibrary::~LinkedListLibrary() {
   while (headNode != nullptr) {
      BookNode* tempNode = headNode->GetNext();
      delete headNode;
      headNode = tempNode;
   }
}

int LinkedListLibrary::InsertSorted(BookNode* newNode, int counter)
{
   BookNode* currNode, nextNode;

   if (headNode == nullptr)
   {
       headNode = lastNode = newNode;
       return ++counter;
   }

   if (headNode->GetBookISBN() >= newNode->GetBookISBN())
   {
       newNode->SetNext(headNode);
       headNode = newNode;
       return ++counter;
   }

    // Locate the node before insertion point
    currNode = headNode;

    while (currNode->GetNext() && currNode->GetNext()->GetBookISBN() < newNode->GetBookISBN())
    {
        currNode = currNode->GetNext();
    }

    if (currNode->GetNext() == nullptr)
    {
        lastNode = newNode;
    }

    currNode->insertAfter(newNode);


//   // Special case for head node
//   if (headNode == nullptr || headNode->GetBookISBN() >= newNode->GetBookISBN()) {
//      if (headNode == nullptr)
//      {
////          newNode->SetNext(headNode);
//          headNode = newNode;
//          lastNode = newNode;
//      }
//      else
//      {
//          newNode->SetNext(headNode);
//          headNode = newNode;
//      }
//
//   }
//   else
//   {
//      // Locate the node before insertion point
//      currNode = headNode;
//
//      while (currNode->GetNext() && currNode->GetNext()->GetBookISBN() < newNode->GetBookISBN())
//      {
//          currNode = currNode->GetNext();
//      }
//      currNode->insertAfter(newNode);
//
//
//
//      // NEW: Check if this is last node to update tail node
//      if (newNode->GetNext() == nullptr)
//      {
//          lastNode = newNode;
//      }
//
//   }

   ++counter;
   return counter;
}

void LinkedListLibrary::PrintLibrary() const {
   BookNode* currNode;

   currNode = headNode;
   while (currNode != nullptr) {
      currNode->PrintBookInfo();
      cout << endl;
      currNode = currNode->GetNext();
   }
}
