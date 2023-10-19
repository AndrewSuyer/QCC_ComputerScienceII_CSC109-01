/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.23 Library book sorting
 */


#ifndef INC_9_23_LIBRARYBOOKSORTING_VECTORLIBRARY_H
#define INC_9_23_LIBRARYBOOKSORTING_VECTORLIBRARY_H

#include "Book.h"
#include <vector>

class VectorLibrary
{
public:
    VectorLibrary();

    int InsertSorted(const Book &newBook, int counter);

    void PrintLibrary() const;

private:
    // vector library
    std::vector<Book> library;
};


#endif // INC_9_23_LIBRARYBOOKSORTING_VECTORLIBRARY_H
