/*
 * Copyright 2023
 * Created by Andrew Suyer
 */


#ifndef BOOKSTORE_BOOK_H
#define BOOKSTORE_BOOK_H

#include <string>


class Book
{
public:

    Book();

    Book(std::string aTitle, std::string aAuthor, int aPages, double aPrice);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const std::string &getAuthor() const;

    void setAuthor(const std::string &author);

    int getPages() const;

    void setPages(int pages);

    double getPrice() const;

    void setPrice(double price);


    void printInfo() const;

    /*
     * Operator overloading.
     * Start with == and > than make all the others using those
     */

    /// Compares page counts of books
    bool operator==(const Book& rhs) const;

    /// Compares page counts of books
    bool operator>(const Book& rhs) const;

    bool operator!=(const Book& rhs) const;
    bool operator<=(const Book& rhs) const;
    bool operator<(const Book& rhs) const;
    bool operator>=(const Book& rhs) const;


private:

    std::string title;
    std::string author;
    int pages;
    double price;

};


#endif // BOOKSTORE_BOOK_H
