#pragma once

#include <iostream>

#include <string>

class Employee {

public:
	Employee(std::string, int, std::string);

	void setEmployeeName(std::string);
	void setEmployeeID(int);
	void setEmployeePosition(std::string);

	std::string getEmployeeName() const;
	int			getEmployeeID() const;
	std::string getEmployeePosition() const;

	void showEmployeeInfo();

private:
	std::string employeeName;
	int			employeeID;
	std::string employeePosition;

};