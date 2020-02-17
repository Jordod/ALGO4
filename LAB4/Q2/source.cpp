#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main()
{
	BinaryTree b;

	b.add(5);
	b.add(4);
	
	cout << "Path Sum: " << (b.hasPathSum(9) ? "True" : "False") << endl;
}