#include "Library.h"
#include <iostream>

void Library::addBook(const Book &book) {
    books.push_back(book);
}

void Library::displayLibrary() const {
    for (const auto &book : books) {
        book.displayBookInfo();
        std::cout << "-------------------" << std::endl;
    }
}
