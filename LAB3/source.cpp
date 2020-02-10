#include <iostream>
#include "BinaryTree.h"

int main()
{
	BinaryTree b;
	b.add(10);
	b.add(1);
	b.add(12);


	std::cout << "Ordered Tree Values" << std::endl;
	b.print();
	std::cout << "Height: " << b.height();
}