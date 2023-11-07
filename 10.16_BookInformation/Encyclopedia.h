/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.16 Book information
 */


#ifndef INC_10_16_BOOKINFORMATION_ENCYCLOPEDIA_H
#define INC_10_16_BOOKINFORMATION_ENCYCLOPEDIA_H

#include "Book.h"
#include <string>

class Encyclopedia : public Book
{
    std::string edition;
    int numPages;
    int numVolumes;

public:

    const std::string &GetEdition() const;
    void SetEdition(const std::string &edition);

    int GetNumPages() const;
    void SetNumPages(int numPages);

    int GetNumVolumes() const;
    void SetNumVolumes(int num);

    void PrintInfo();
};


#endif // INC_10_16_BOOKINFORMATION_ENCYCLOPEDIA_H
