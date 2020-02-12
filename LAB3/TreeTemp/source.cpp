#include <iostream>
#include "BinaryTree.h"

int main()
{
	BinaryTree<char> b;
	b.add('v');
	b.add('c');
	b.add('a');
	b.add('z');
	
	std::cout << "Ordered Tree Values" << std::endl;
	b.print();
	std::cout << "Height: " << b.height() << std::endl;
	std::cout << "Find a: " << (b.find('a') ? "true" : "false") << std::endl;
	std::cout << "Find x: " << (b.find('x') ? "true" : "false") << std::endl;
}