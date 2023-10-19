/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */

#ifndef INC_9_24_LIBRARYBOOKSORTING_ISBN_LINKEDLISTLIBRARYTEST_H
#define INC_9_24_LIBRARYBOOKSORTING_ISBN_LINKEDLISTLIBRARYTEST_H


#include <cxxtest/TestSuite.h>
#include <iostream>
#include <fstream>

// Include class headers here:
#include "LinkedListLibrary.h"
#include "Book.h"

class LinkedListLibraryTest : public CxxTest::TestSuite
{
private:

    // Objects (if needed)

public:

    // All tests should start with the word 'test' followed by
    // the name of the function being tested.
    // Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.

    void testConstructorDestructor()
    {
        LinkedListLibrary* l1 = new LinkedListLibrary();
        delete l1;
    }

    void testInsertSorted()
    {
        BookNode* b1 = new BookNode();
        BookNode* b2 = new BookNode("HP", "JKR", 12345678);
        BookNode* b3 = new BookNode("TP", "PPP", 987662312);
        BookNode* b4 = new BookNode("PP", "OO", 999999999);

        int counter = 0;
        LinkedListLibrary list;

        counter = list.InsertSorted(b2, counter);       // test head is null
        counter = list.InsertSorted(b3, counter);       // test inserting at back (while loop)
        counter = list.InsertSorted(b1, counter);       // test inserting in front (head isnt null)
        counter = list.InsertSorted(b4, counter);       // test inserting at back

        // list: b1 -> b2 -> b3 -> b4

        TS_ASSERT_EQUALS(list.headNode, b1)
        TS_ASSERT_EQUALS(list.headNode->GetBookISBN(), 0)
        TS_ASSERT_EQUALS(list.headNode->GetNext()->GetBookISBN(), 12345678)
        TS_ASSERT_EQUALS(list.headNode->GetNext()->GetNext()->GetBookISBN(), 987662312)
        TS_ASSERT_EQUALS(list.headNode->GetNext()->GetNext()->GetNext()->GetBookISBN(), 999999999)
        TS_ASSERT_EQUALS(list.lastNode, b4)

        std::cout << std::endl << "Printing linked-list library:" << std::endl;
        list.PrintLibrary();
    }

    void testLoading100Books()
    {

        TSM_ASSERT_EQUALS("Contents of files are different!",
                          "Da Vinci Code,The\n"
                          "9780552149518\n"
                          "Brown, Dan\n"
                          "Harry Potter and the Philosopher's Stone#\n"
                          "9780747532743\n"
                          "Rowling, J. K.\n"
                          "Harry Potter and the Chamber of Secrets#\n"
                          "9780747538486\n"
                          "Rowling, J. K.",
                          "Da Vinci Code,The\n"
                          "9780552149518\n"
                          "Brown, Dan\n"
                          "Harry Potter and the Philosopher's Stone#\n"
                          "9780747532743\n"
                          "Rowling, J. K.\n"
                          "Harry Potter and the Chamber of Secrets#\n"
                          "9780747538486\n"
                          "Rowling, J. K.")

        using std::string;

        // FILLING LIST:
        std::ifstream inputFS; // File input stream
        LinkedListLibrary linkedListLibrary;
        int linkedListOperations = 0;

        BookNode* currNode;

        string bookTitle;
        long long bookISBN = 0;
        string bookAuthor;

        // Try to open file
        inputFS.open("books4.txt");

        if (!inputFS.is_open())
            std::cout << "FILE IS NOT OPEN\n";

        while (getline(inputFS, bookTitle))
        {
            bookTitle.pop_back();          // remove 'r'

            // Do this trash to get rid of 'r' after the ISBN
            std::istringstream ss;
            std::string line2;
            std::getline(inputFS, line2);
            ss.str(line2);
            ss >> bookISBN;

            getline(inputFS, bookAuthor);

            // Remove 'r' if there is one
            if (bookAuthor.back() == '\r') {
                bookAuthor.pop_back();          // remove 'r'
            }

            // Insert into linked list
            currNode = new BookNode(bookTitle, bookAuthor, bookISBN);
            linkedListOperations = linkedListLibrary.InsertSorted(currNode, linkedListOperations);
        }

        inputFS.close();

        std::cout << "Print linked list library (#2)" << std::endl;
        linkedListLibrary.PrintLibrary();

        TS_ASSERT_EQUALS(linkedListLibrary.headNode->GetNext()->GetBookISBN(), 9780007232741)

        // TESTING LIST:
        std::ifstream reader("books4.txt");
        BookNode* current = linkedListLibrary.headNode;
        int counter = 1;
        while (current != nullptr)
        {
            std::string title, ISBN, author;
            long long id;

            std::getline(reader, title);

            std::getline(reader, ISBN);
            std::istringstream ss(ISBN);
            ss >> id;

            std::getline(reader, author);

            TSM_ASSERT_EQUALS(counter, current->GetBookISBN(), id)

            current = current->GetNext();
            ++counter;
        }
    }

};


#endif // INC_9_24_LIBRARYBOOKSORTING_ISBN_LINKEDLISTLIBRARYTEST_H
