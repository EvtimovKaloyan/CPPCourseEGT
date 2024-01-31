#pragma once

#include "Teacher.h"
#include "Student.h"

class Class {

public:
	Class(const std::string&, const std::vector<Teacher>&, const std::vector<Student>&);

	std::string getClassID();
	std::vector<Teacher> getTeachers();
	std::vector<Student> getStudents();

private:
	std::string classID;
	std::vector<Teacher> teachers;
	std::vector<Student> students;
};