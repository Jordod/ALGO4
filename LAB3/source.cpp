#include <iostream>
#include "BinaryTree.h"

int main()
{
	BinaryTree b;
	b.add(10);
	b.add(20);
	b.add(20);
	b.add(30);
	b.add(30);
	b.add(30);
	b.add(30);

	b.printChild(b.root);
}