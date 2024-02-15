#pragma once

#include <iostream>

#include "Book.h"

class Member {

public:

    Member(std::string, int, std::string);          // Constructor of 'Member'-class

    Member();                                       // Default Constructor

    // 'Member'-class' Setters:
    void setMemberName(std::string);
    void setMemberAge(int);
    void setMemberID(std::string);

    // 'Member'-class' Getters:
    std::string getMemberName();
    int         getMemberAge();
    std::string getMemberID();

    // 'Member'-class' display method:
    void showMemberInfo();

    // book-borrowing simulation method:
    void borrowBook(Book*);

private:
    std::string memberName;
    int         memberAge;
    std::string memberID;

};
