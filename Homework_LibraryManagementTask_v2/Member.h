#pragma once

#include <iostream>

#include "Book.h"

class Member {

public:

    Member(std::string, int, std::string);

    Member();

    void setMemberName(std::string);
    void setMemberAge(int);
    void setMemberID(std::string);

    std::string getMemberName();
    int         getMemberAge();
    std::string getMemberID();

    void showMemberInfo();
    void hireBook(Book*);

private:
    std::string memberName;
    int         memberAge;
    std::string memberID;

};
