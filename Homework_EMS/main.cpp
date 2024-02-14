#include <iostream>

#include "Department.h"

#include "Employee.h"

int main()
{
	Employee employee1("Georgi Georgiev", 101, "sales");
	Employee employee2("Martin Martinov", 102, "sales");
	Employee employee3("Ivan Ivanov", 201, "IT");
	Employee employee4("Petyr Petrov", 301, "legal");
	Employee employee5("Milka Milkova", 401, "HR");
	Employee employee6("Gergana Gergova", 501, "CS");
	Employee employee7("Stoyan Stoyanov", 601, "Tech");
	Employee employee8("Mihaela Mihaylova", 402, "HR");
	Employee employee9("Stefan Stefanov", 602, "Tech");

	std::vector<Employee*> employeesDB;

	employeesDB.push_back(&employee1);
	employeesDB.push_back(&employee2);
	employeesDB.push_back(&employee3);
	employeesDB.push_back(&employee4);
	employeesDB.push_back(&employee5);
	employeesDB.push_back(&employee6);
	employeesDB.push_back(&employee7);
	employeesDB.push_back(&employee8);
	employeesDB.push_back(&employee9);

	Department department1("Main Office");

	for (int i = 0; i < employeesDB.size(); i++)
	{
		department1.addEmployee(employeesDB[i]);
	}

	department1.displayEmployees();

	return 0;
}