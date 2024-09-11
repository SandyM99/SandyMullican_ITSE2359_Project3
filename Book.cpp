#include "Book.h"
#include <iostream>

Book::Book() : title(""), author(""), year(0) {}

Book::Book(const std::string &title, const std::string &author, int year) : title(title), author(author), year(year) {}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
int Book::getYear() const { return year; }

void Book::setTitle(const std::string &title) { this->title = title; }
void Book::setAuthor(const std::string &author) { this->author = author; }
void Book::setYear(int year) { this->year = year; }

void Book::displayBookInfo() const {
    std::cout << "Title: " << title << "\nAuthor: " << author << "\nYear: " << year << std::endl;
}
