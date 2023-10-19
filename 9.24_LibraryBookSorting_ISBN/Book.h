/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */


#ifndef BOOKH
#define BOOKH

#include <string>

class Book{
public:
    Book();

    Book(const std::string& userBookTitle, const std::string& userBookAuthor, long userBookISBN);

    long long GetBookISBN() const;

    void PrintInfo() const;

private:

    std::string bookTitle;
    std::string bookAuthor;
    long long bookISBN;
};

#endif
