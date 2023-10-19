/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 9.24 Library book sorting
 */


#ifndef VECTORLIBRARYH
#define VECTORLIBRARYH

#include "Book.h"
#include <vector>

class VectorLibrary {
public:

    VectorLibrary();

    int InsertSorted(const Book &newBook, int counter);

    void PrintLibrary() const;
   
private:
   // vector library
   std::vector<Book> library;
};

#endif
