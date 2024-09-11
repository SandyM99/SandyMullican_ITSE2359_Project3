#include "Book.h"
#include "Library.h"
#include "Member.h"
#include <iostream>

int main() {
    // Create some books
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    Book book2("1984", "George Orwell", 1949);

    // Create a library and add books to it
    Library library;
    library.addBook(book1);
    library.addBook(book2);

    // Display the library's contents
    std::cout << "Library Contents:\n";
    library.displayLibrary();

    // Create a library member
    Member member("Julieanna", 101);
    std::cout << "\nLibrary Member Info:\n";
    member.displayMemberInfo();

    return 0;
}
