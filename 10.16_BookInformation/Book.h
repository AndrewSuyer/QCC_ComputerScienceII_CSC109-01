/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.16 Book information
 */


#ifndef INC_10_16_BOOKINFORMATION_BOOK_H
#define INC_10_16_BOOKINFORMATION_BOOK_H


#include <string>

class Book
{
public:

    void SetTitle(const std::string& userTitle);
    const std::string& GetTitle() const;

    void SetAuthor(const std::string& userAuthor);
    const std::string& GetAuthor() const;

    void SetPublisher(const std::string& userPublisher);
    const std::string& GetPublisher() const;

    void SetPublicationDate(const std::string& userPublicationDate);
    const std::string& GetPublicationDate() const;

    void PrintInfo();

protected:

    std::string title;
    std::string author;
    std::string publisher;
    std::string publicationDate;
};


#endif // INC_10_16_BOOKINFORMATION_BOOK_H
