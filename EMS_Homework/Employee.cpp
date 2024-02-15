#include "Employee.h"

Employee::Employee(std::string employeeName_, int employeeID_, std::string employeePosition_) {
	this->setEmployeeName(employeeName_);
	this->setEmployeeID(employeeID_);
	this->setEmployeePosition(employeePosition_);
}

//Employee::Employee(std::string employeeName_, int employeeID_, std::string employeePosition_) {
//	this->employeeName = employeeName_;
//	this->employeeID = employeeID_;
//	this->employeePosition = employeePosition_;
//}

// Employee::Employee(std::string employeeName_, int employeeID_, std::string employeePosition_)
// 	: employeeName(employeeName_), employeeID(employeeID_), employeePosition(employeePosition_) {}

void Employee::setEmployeeName(std::string employeeName_) {
	this->employeeName = employeeName_;
}

void Employee::setEmployeeID(int employeeID_) {
	this->employeeID = employeeID_;
}

void Employee::setEmployeePosition(std::string employeePosition_) {
	this->employeePosition = employeePosition_;
}

std::string Employee::getEmployeeName() const {
	return this->employeeName;
}

int Employee::getEmployeeID() const {
	return this->employeeID;
}

std::string Employee::getEmployeePosition() const {
	return this->employeePosition;
}

void Employee::showEmployeeInfo() {
	std::cout << "Employee: " << this->getEmployeeName() << std::endl <<
		"\tID: " << this->getEmployeeID() << std::endl <<
		"\tPosition: " << this->getEmployeePosition() << std::endl;
}