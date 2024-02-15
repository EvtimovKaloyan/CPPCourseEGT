#include "Teacher.h"

Teacher::Teacher(const std::string& teacherName_, const std::string& teacherTitle_, const std::vector<Discipline>& disciplineNames_)
	: teacherName(teacherName_), teacherTitle(teacherTitle_), disciplineNames(disciplineNames_) {}

std::string Teacher::getTeacherName() {
	return this->teacherName;
}

std::string Teacher::getTeacherTitle() {
	return this->teacherTitle;
}

std::vector<Discipline> Teacher::getDisciplineNames() {
	return this->disciplineNames;
}

void Teacher::showTeacherRecords() {
	std::cout << "\tTeacher: " << this->getTeacherName() << ", Title: " << getTeacherTitle() << std::endl;
}