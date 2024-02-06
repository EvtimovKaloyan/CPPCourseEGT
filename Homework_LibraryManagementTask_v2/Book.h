#pragma once

#include <iostream>
// #include <vector>

class Book {

public:
    Book(std::string, std::string, std::string);

    Book(); // should this be here, or in cpp-file?

    void setBookTitle(std::string);
    void setAuthorName(std::string);
    void setISBN(std::string);

    std::string getBookTitle();
    std::string getAuthorName();
    std::string getISBN();

    void showBookInfo();
        
private:
    std::string title;
    std::string author;
    std::string ISBN;
};
