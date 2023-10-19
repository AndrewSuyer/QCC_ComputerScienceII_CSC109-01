/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */

#ifndef BOOKNODEH
#define BOOKNODEH

#include <string>

class BookNode
{
public:
    BookNode();

    // Constructor
    BookNode(const std::string& bookTitleInit, const std::string& bookAuthorInit, long long bookISBNInit);

    // Constructor
    BookNode(const std::string& bookTitleInit, const std::string& bookAuthorInit, long bookISBNInit, BookNode* nextLoc);

    // insertAfter
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

#endif
