#include "Employee.h"

Employee::Employee(std::string in, double salary) : Person(in), salary(salary)
{}

void Employee::printname() 
{
	Person::printname();
	std::cout << "My salary is " << salary << '\n';
}