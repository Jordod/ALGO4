#pragma once
#include "Person.h"
class Customer : public Person
{
public:
	Customer(std::string in);
	void printname();
};