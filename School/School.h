#pragma once

#include "Class.h"

class School {

public:
	School(const std::vector<Class>&);

	std::vector<Class> getSchoolClasses();

private:
	std::vector<Class> schoolClasses;
};