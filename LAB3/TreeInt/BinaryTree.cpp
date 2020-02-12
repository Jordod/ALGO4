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
	if (toAdd->value < at->value)
	{
		if (at->leftChild == nullptr)
		{
			at->leftChild = toAdd;
			return;
		}
		addNode(at->leftChild, toAdd);
	}
	else if (toAdd->value > at->value)
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
	return height(root) - 1;
}

//https://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/
int BinaryTree::height(TreeNode* n) const
{
	if (root == nullptr) return -1;
	if (n == nullptr)
		return 0;
	else
	{
		/* compute the depth of each subtree */
		int lDepth = height(n->leftChild);
		int rDepth = height(n->rightChild);

		if (lDepth > rDepth) return lDepth + 1;
		return rDepth + 1;
	}
}