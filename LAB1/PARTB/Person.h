#pragma once
#include <string>
#include <iostream>

class Person
{
public:
	Person(std::string); // initialise the name
	virtual void printname();
protected:
	std::string name;
};
