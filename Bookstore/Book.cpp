/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#include "Book.h"

#include <iostream>


Book::Book() :
    title("none"), author("none"), pages(0), price(0)
{

}


Book::Book(std::string aTitle, std::string aAuthor, int aPages, double aPrice) :
    title(aTitle), author(aAuthor), pages(aPages), price(aPrice)
{

}


const std::string &Book::getTitle() const
{
    return title;
}


void Book::setTitle(const std::string &title)
{
    this->title = title;
}


const std::string &Book::getAuthor() const
{
    return author;
}


void Book::setAuthor(const std::string &author)
{
    this->author = author;
}


int Book::getPages() const
{
    return pages;
}


void Book::setPages(int pages)
{
    this->pages = pages;
}


double Book::getPrice() const
{
    return price;
}


void Book::setPrice(double price)
{
    this->price = price;
}


void Book::printInfo() const
{
    std::cout << title << " by " << author << ":" << std::endl;
    std::cout << "Pages: " << pages << std::endl;
    std::cout << "Price: $" << price << std::endl;
}


bool Book::operator==(const Book &rhs) const
{
    return this->pages == rhs.pages;
}


bool Book::operator>(const Book &rhs) const
{
    return this->pages > rhs.pages;
}


bool Book::operator!=(const Book &rhs) const
{
    return !(*this == rhs);
}


bool Book::operator<=(const Book &rhs) const
{
    return !(*this > rhs);
}


bool Book::operator<(const Book &rhs) const
{
    return rhs > *this;
}


bool Book::operator>=(const Book &rhs) const
{
    return !(*this < rhs);
}


