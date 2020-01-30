#pragma once
#include "Person.h"
class Employee : public Person
{
private:
	double salary;
public:
	Employee(std::string in, double salary);
	void printname();
};