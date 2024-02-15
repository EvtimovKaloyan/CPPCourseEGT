#include "Member.h"

//Member::Member(std::string name_, int age_, std::string memberID_) : memberName(name_), memberAge(age_), memberID(memberID_) {};

Member::Member(std::string name, int age, std::string memberID) {
        this->memberName = name,
        this->memberAge = age,
        this->memberID = memberID;
}

//Member::Member(std::string name, int age, std::string memberID) {
//        setMemberName(name);
//        setMemberAge(age);
//        setMemberID(memberID);
//}

void Member::setMemberName(std::string name) {
    this->memberName = name;
}

void Member::setMemberAge(int age) {
    this->memberAge = age;
}

void Member::setMemberID(std::string memberID) {
    this->memberID = memberID;
}

std::string Member::getMemberName() {
    return this->memberName;
}

int Member::getMemberAge() {
    return this->memberAge;
}

std::string Member::getMemberID() {
    return this->memberID;
}

void Member::showMemberInfo() {
    std::cout << "Customer: "           << this->getMemberName() << std::endl <<
                    "\t* age: "         << this->getMemberAge() << std::endl <<
                    "\t* memberID: "    << this->getMemberID() << std::endl;
}

void Member::borrowBook(Book* book) {
    std::cout << "Following book: " << std::endl <<
        "---------------------------" << std::endl;
    book->showBookInfo();
    std::cout << "---------------------------" << std::endl <<
        " was hired by member: " << std::endl <<
        "---------------------------" << std::endl;
    showMemberInfo();
    std::cout << std::endl <<
        "***************************" << std::endl;
}