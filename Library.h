#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book &book);
    void displayLibrary() const;
};

#endif
