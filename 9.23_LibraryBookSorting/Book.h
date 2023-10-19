/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.23 Library book sorting
 */


#ifndef INC_9_23_LIBRARYBOOKSORTING_BOOK_H
#define INC_9_23_LIBRARYBOOKSORTING_BOOK_H

#include <string>

class Book
{
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


#endif // INC_9_23_LIBRARYBOOKSORTING_BOOK_H
