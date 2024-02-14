#pragma once

#include <iostream>

#include <string>

#include <vector>

#include "Employee.h"

class Department {

public:

	Department(std::string);

	void setDepartmentName(std::string);

	std::string getDepartmentName();

	int getEmployeesCount();

	void addEmployee(Employee*);

	void displayEmployees();


private:
	std::string				departmentName;
	std::vector<Employee*>	employeesDB;
	int						employeesCount = 0;
};
