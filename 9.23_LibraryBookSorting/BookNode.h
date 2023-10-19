/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.23 Library book sorting
 */


#ifndef INC_9_23_LIBRARYBOOKSORTING_BOOKNODE_H
#define INC_9_23_LIBRARYBOOKSORTING_BOOKNODE_H

#include <string>

class BookNode
{
public:
    BookNode();

    // Constructor
    BookNode(const std::string& bookTitleInit, const std::string& bookAuthorInit, long bookISBNInit);

    // Constructor
    BookNode(const std::string& bookTitleInit, const std::string& bookAuthorInit, long bookISBNInit, BookNode* nextLoc);

    // inserAfter
    void insertAfter(BookNode* nodeLoc);

    //setNext
    void SetNext(BookNode* nodeLoc);

    // Get location pointed by nextNodePtr
    BookNode* GetNext() const;

    long long GetBookISBN() const;

    // Print book information
    void PrintBookInfo() const;

private:

    std::string bookTitle;
    std::string bookAuthor;
    long long bookISBN;
    BookNode* nextNodePtr; // Reference to the next node
};


#endif // INC_9_23_LIBRARYBOOKSORTING_BOOKNODE_H
