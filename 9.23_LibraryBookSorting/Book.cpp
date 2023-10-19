/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.23 Library book sorting
 */


#include "Book.h"
#include <iostream>

using std::cout, std::endl;


Book::Book() {
    bookTitle = "";
    bookAuthor = "";
    bookISBN = 0;
}


Book::Book(const std::string& userBookTitle, const std::string& userBookAuthor, long userBookISBN) {
    bookTitle = userBookTitle;
    bookAuthor = userBookAuthor;
    bookISBN = userBookISBN;
}


long long Book::GetBookISBN() const{
    return bookISBN;
}


void Book::PrintInfo() const{
    cout << "Title: " << bookTitle << endl;
    cout << "Author: " << bookAuthor << endl;
    cout << "ISBN: " << bookISBN << endl;
}
