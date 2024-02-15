#include "School.h"

School::School(const std::vector<Class>& classes) : schoolClasses(classes) {}

std::vector<Class> School::getSchoolClasses() {
	return this->schoolClasses;
}