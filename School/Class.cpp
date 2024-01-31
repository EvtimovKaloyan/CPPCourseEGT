#include "Class.h"

Class::Class(const std::string& classID_, const std::vector<Teacher>& teachers_, const std::vector<Student>& students)
	: classID(classID_), teachers(teachers_), students(students) {}

std::string Class::getClassID() {
	return this->classID;	// OR return classID;
}

std::vector<Teacher> Class::getTeachers() {
	return this->teachers;	// OR return teachers;
}

std::vector<Student> Class::getStudents() {
	return this->students;	// OR return students;
}