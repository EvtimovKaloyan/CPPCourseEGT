#include "Department.h"

#include "Employee.h"

Department::Department(std::string departmentName_) {
	setDepartmentName(departmentName_);
	this->employeesCount;
}

void Department::setDepartmentName(std::string departmentName_) {
	this->departmentName = departmentName_;
}

std::string Department::getDepartmentName() {
	return this->departmentName;
}

void Department::addEmployee(Employee* employee) {
	this->employeesDB.push_back(employee);
	this->employeesCount++;
}

void Department::displayEmployees() {
	std::cout << "List of employees at department " << this->getDepartmentName() << ':' << std::endl;

	for (auto employee : this->employeesDB) 
	{
		employee->showEmployeeInfo();
	}
}