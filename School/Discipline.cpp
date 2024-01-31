#include "Discipline.h"

Discipline::Discipline(const std::string& discName, int discLecturesCount, int discExercisesCount) 
	: disciplineName(discName), disciplineLecturesCount(discLecturesCount), disciplineExercisesCount(discExercisesCount) {}

std::string Discipline::getDisciplineName() {
	return this->disciplineName;
}

int Discipline::getDisciplineLecturesCount() {
	return this->disciplineLecturesCount;
}

int Discipline::getDisciplineExercisesCount() {
	return this->disciplineExercisesCount;
}

void Discipline::showDisciplineInfo() {
	std::cout << "\t\tDiscipline: " << this->disciplineName 
				<< ", Lectures: " << this->disciplineLecturesCount 
				  << ", Exercises: " << this->disciplineExercisesCount
					<< std::endl;
}