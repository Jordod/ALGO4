#include <iostream>
#include "Employee.h"

using namespace std;


int main()
{
	Person* p = new Employee("John", 40000);
	p->printname();
	cout << '\n';

	p = new Person("Mary");
	p->printname();
	cout << '\n';

	p = new Employee("Jim", 40000);
	p->printname();
	cout << '\n';

}