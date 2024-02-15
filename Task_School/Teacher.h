#pragma once

#include "Discipline.h"
#include <vector>

class Teacher {

public:
	Teacher(const std::string&, const std::string&, const std::vector<Discipline>&);

	std::string getTeacherName();
	std::string getTeacherTitle();
	std::vector<Discipline> getDisciplineNames();

	void showTeacherRecords();

private:
	std::string teacherName;
	std::string teacherTitle;
	std::vector<Discipline> disciplineNames;
};