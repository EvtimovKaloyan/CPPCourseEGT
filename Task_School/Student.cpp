#include "Student.h"

Student::Student(const std::string& studentName_, int studentClassNumber_) : studentName(studentName_), studentClassNumber(studentClassNumber_) {}

void Student::setStudentName(std::string studentName_) {
	this->studentName = studentName_;
}

void Student::setStudentClassNumber(int studentClassNumber_) {
	this->studentClassNumber = studentClassNumber_;
}

std::string Student::getStudentName() {
	return this->studentName;
}

int Student::getStudentClassNumber() {
	return this->studentClassNumber;
}

void Student::showStudentRecords() {
	std::cout << "\tStudent: " << this->studentName << "; class number: " << this->studentClassNumber << std::endl;
}