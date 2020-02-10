#include "BinaryTree.h"
#include <iostream>

using namespace std;

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree()
{

}

void BinaryTree::add(int toAdd)
{
	if (root == nullptr) { root = new TreeNode(toAdd); return; };
	addNode(root, new TreeNode(toAdd));
}

void BinaryTree::addNode(TreeNode* at, TreeNode* toAdd)
{
	if (at->value > toAdd->value)
	{
		if (at->leftChild == nullptr)
		{
			at->leftChild = toAdd;
			return;
		}
		addNode(at->leftChild, toAdd);
	}
	else if (at->value < toAdd->value)
	{
		if (at->rightChild == nullptr)
		{
			at->rightChild = toAdd;
			return;
		}
		addNode(at->rightChild, toAdd);
	}
}

void BinaryTree::print()
{
	print(root);
}

void BinaryTree::print(TreeNode* n) 
{
	if (n == nullptr) return;
	print(n->leftChild);
	cout << n->value << endl;
	print(n->rightChild);
}

int BinaryTree::height() const
{
	return 0;
}