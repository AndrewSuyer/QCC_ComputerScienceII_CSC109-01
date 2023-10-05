/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef BOOKSTORE_BOOKSTORE_H
#define BOOKSTORE_BOOKSTORE_H

#include <vector>
#include "Book.h"


class Bookstore
{
public:

    Bookstore();

    Bookstore(std::string storeName);

    const std::string &getStoreName() const;

    void setStoreName(const std::string &storeName);


    int getBookCount() const;

    void addBook(const Book& book);

    void printCatalog() const;

private:

    std::string storeName;
    std::vector<Book> books;

};


#endif // BOOKSTORE_BOOKSTORE_H
