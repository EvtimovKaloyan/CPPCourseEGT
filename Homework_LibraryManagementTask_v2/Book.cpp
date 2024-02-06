#include "Book.h"

// Constructors:
Book::Book(std::string title, std::string author, std::string ISBN) : title(title), author(author), ISBN(ISBN) {};
/*
Book::Book(std::string title, std::string author, std::string ISBN) {
        this->title = title,
        this->author = author, 
        this->ISBN = ISBN;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
}

Book::Book(std::string title, std::string author, std::string ISBN) {
        this->setBookTitle(title);
        this->setAuthorName(author);
        this->setISBN(ISBN);
}
*/

// Setters
void Book::setBookTitle(std::string title) {
        this->title = title;
}

void Book::setAuthorName(std::string author) {
    this->author = author;
}

void Book::setISBN(std::string ISBN) {
    this->ISBN = ISBN;
}

// Getters
std::string Book::getBookTitle() {
    return this->title;
}

std::string Book::getAuthorName() {
    return this->author;
}

std::string Book::getISBN() {
    return this->ISBN;
}

// Member functions:
void Book::showBookInfo() {
    std::cout << "Book title: "     << this->title << std::endl <<
                    "\t* author: "  << this->author << std::endl <<
                    "\t* ISBN: "    << this->ISBN << std::endl;
}

