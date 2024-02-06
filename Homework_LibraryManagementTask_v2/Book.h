#pragma once

#include <iostream>
// #include <vector>

class Book {

public:
    Book(std::string, std::string, std::string);        // Constructor of 'Book'-class

    Book(); // Should this be here, or in cpp-file? If both are fine, where is more appropriate?

    // 'Book'-class' Setters:
    void setBookTitle(std::string);
    void setAuthorName(std::string);
    void setISBN(std::string);

    // 'Book'-class' Getters:
    std::string getBookTitle();
    std::string getAuthorName();
    std::string getISBN();

    // 'Book'-class' display method:
    void showBookInfo();
        
private:
    // 'Book'-class' fields:
    std::string title;
    std::string author;
    std::string ISBN;
};
