#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    // Constructors
    Book();
    Book(const std::string &title, const std::string &author, int year);

    // Getters
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;

    // Setters
    void setTitle(const std::string &title);
    void setAuthor(const std::string &author);
    void setYear(int year);

    // Display Book Info
    void displayBookInfo() const;
};

#endif
