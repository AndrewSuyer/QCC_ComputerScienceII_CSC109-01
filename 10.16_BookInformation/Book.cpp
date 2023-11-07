/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.16 Book information
 */


#include <iostream>
#include "Book.h"


void Book::SetTitle(const std::string &userTitle)
{
    title = userTitle;
}


const std::string &Book::GetTitle() const
{
    return title;
}


void Book::SetAuthor(const std::string &userAuthor)
{
    author = userAuthor;
}


const std::string &Book::GetAuthor() const
{
    return author;
}


void Book::SetPublisher(const std::string &userPublisher)
{
    publisher = userPublisher;
}


const std::string &Book::GetPublisher() const
{
    return publisher;
}


void Book::SetPublicationDate(const std::string &userPublicationDate)
{
    publicationDate = userPublicationDate;
}


const std::string &Book::GetPublicationDate() const
{
    return publicationDate;
}


void Book::PrintInfo()
{
    std::cout << "Book Information:\n";
    std::cout << "   Book Title: " << title << '\n';
    std::cout << "   Author: " << author << '\n';
    std::cout << "   Publisher: " << publisher << '\n';
    std::cout << "   Publication Date: " << publicationDate << '\n';
}
