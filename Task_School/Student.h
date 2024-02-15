#pragma once

#include <iostream>
#include <string>

class Student {

public:
	Student(const std::string&, int);

	void setStudentName(std::string);
	void setStudentClassNumber(int);

	std::string getStudentName();
	int getStudentClassNumber();

	void showStudentRecords();

private:
	std::string studentName;
	int studentClassNumber;
};