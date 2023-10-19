#include "LinkedListLibrary.h"
#include "VectorLibrary.h"
#include "BookNode.h"
#include "Book.h"
#include <fstream>
#include <iostream>

using namespace std;

void FillLibraries(LinkedListLibrary &linkedListLibrary, VectorLibrary &vectorLibrary)
{
   ifstream inputFS; // File input stream
   int linkedListOperations = 0;
   int vectorOperations = 0;

   BookNode* currNode;
   Book tempBook;

   string bookTitle;
    long long bookISBN = 0;
    string bookAuthor;

   // Try to open file
   inputFS.open("books2.txt");

   if (!inputFS.is_open())
       std::cout << "FILE IS NOT OPEN\n";

   while(getline(inputFS, bookTitle))
   {
        inputFS >> bookISBN;
        inputFS.ignore(1, '\n');
        getline(inputFS, bookAuthor);

        // Insert into linked list
        currNode = new BookNode(bookTitle, bookAuthor, bookISBN);
        linkedListOperations = linkedListLibrary.InsertSorted(currNode, linkedListOperations);

        // Insert into vector
        tempBook = Book(bookTitle, bookAuthor, bookISBN);
        vectorOperations = vectorLibrary.InsertSorted(tempBook, vectorOperations);
   }

//   while(!inputFS.eof())
//   {
//       getline(inputFS, bookTitle);
//       inputFS >> bookISBN;
//       inputFS.ignore();
//       getline(inputFS, bookAuthor);
//
//       // Insert into linked list
//      currNode = new BookNode(bookTitle, bookAuthor, bookISBN);
//      linkedListOperations = linkedListLibrary.InsertSorted(currNode, linkedListOperations);
//
//      // Insert into vector
//      tempBook = Book(bookTitle, bookAuthor, bookISBN);
//      vectorOperations = vectorLibrary.InsertSorted(tempBook, vectorOperations);
//   }

   inputFS.close(); // close() may throw ios_base::failure if fails
}


int main (int argc, const char* argv[])
{
    int linkedListOperations = 0;
    int vectorOperations = 0;

    // Create libraries
    LinkedListLibrary linkedListLibrary;
    VectorLibrary vectorLibrary;

    // Fill libraries with 100 books
    FillLibraries(linkedListLibrary, vectorLibrary);

    // Create new book to insert into libraries
    BookNode* currNode;
    Book tempBook;

    string bookTitle;
    string bookAuthor;
    long long bookISBN;

    getline(cin, bookTitle);
    cin >> bookISBN;
    cin.ignore();
    getline(cin, bookAuthor);


    cout << "Initial linked list" << endl;
    linkedListLibrary.PrintLibrary();

    cout << "Initial vector list" << endl;
    vectorLibrary.PrintLibrary();


    // Insert into linked list
    // No need to delete currNode, deleted by LinkedListLibrary destructor
    currNode = new BookNode(bookTitle, bookAuthor, bookISBN);
    linkedListOperations = linkedListLibrary.InsertSorted(currNode, linkedListOperations);

    cout << "After insertsort linked list" << endl;
    linkedListLibrary.PrintLibrary();

    // Insert into vector
    tempBook = Book(bookTitle, bookAuthor, bookISBN);
    vectorOperations = vectorLibrary.InsertSorted(tempBook, vectorOperations);

    cout << "After insertsort vector list" << endl;
    vectorLibrary.PrintLibrary();


    cout << "LinkedList counter: " << linkedListOperations << endl;
    cout << "vector counter: " << vectorOperations << endl;
    cout << "head node" << endl;
    linkedListLibrary.headNode->PrintBookInfo();
    cout << "last node" << endl;
    linkedListLibrary.lastNode->PrintBookInfo();

}
