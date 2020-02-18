#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
	BinaryTree b;

	b.add(5);
	b.add(4);
	b.add(4);
	b.add(11);
	b.add(6);
	b.add(18);
	
	cout << "Path Sum 9: " << (b.hasPathSum(9) ? "True" : "False") << endl;
	cout << "Path Sum 22: " << (b.hasPathSum(22) ? "True" : "False") << endl;

	b.printPaths();
	cout << "Min: " << b.minValue() << endl;
	cout << "Max: " << b.maxValue() << endl;
	cout << "Is BST: " << (b.isBST() ? "True" : "False") << endl;
}