#include "Customer.h"

Customer::Customer(std::string in) : Person(in)
{}

void Customer::printname()
{
	Person::printname();
	std::cout << "I would like to make a complaint";
}