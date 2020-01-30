#include "Person.h"
#include <iostream>

Person::Person(std::string in) : name(in)
{}

void Person::printname()
{
	std::cout << "My Name is " << name << '\n';
}