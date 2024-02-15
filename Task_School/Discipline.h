#pragma once

#include <iostream>
#include <string>
// #include <vector>

class Discipline {

public:
	Discipline(const std::string&, int, int);

	void setDisciplineName(std::string);
	void setDisciplineLecturesCount(int);
	void setDisciplineExercisesCount(int);

	std::string getDisciplineName();
	int getDisciplineLecturesCount();
	int getDisciplineExercisesCount();
	void showDisciplineInfo();

private:
	std::string disciplineName;
	int disciplineLecturesCount;
	int disciplineExercisesCount;
};