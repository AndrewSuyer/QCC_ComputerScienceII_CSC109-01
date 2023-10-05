#include "Bookstore.h"

#include <iostream>

/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


Bookstore::Bookstore() :
    storeName("none"), books()
{

}


Bookstore::Bookstore(std::string storeName) :
    storeName(storeName), books()
{

}


const std::string &Bookstore::getStoreName() const
{
    return storeName;
}


void Bookstore::setStoreName(const std::string &storeName)
{
    Bookstore::storeName = storeName;
}


int Bookstore::getBookCount() const
{
    return (int) books.size();
}


void Bookstore::addBook(const Book &book)
{
    books.push_back(book);
}


void Bookstore::printCatalog() const
{
    std::cout << storeName << ":" << std::endl;
    std::cout << "Book count: " << getBookCount() << std::endl;
    for (auto i = books.begin(); i < books.end(); ++i)
    {
        i->printInfo();
    }
}
