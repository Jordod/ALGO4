#include "BinaryTree.h"
#include <iostream>

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree()
{

}

void BinaryTree::add(int toAdd)
{
	if (root == nullptr) 
	{
		root = new TreeNode(toAdd);
		return;
	}
	addNode(root, new TreeNode(toAdd));
}

void BinaryTree::addNode(TreeNode* at, TreeNode* toAdd)
{
	if (at == nullptr) 
	{
		at = toAdd;
		return;
	}
	if(at->leftChild == nullptr)
	{
		addNode(at->leftChild, toAdd);
		return;
	}
	if (at->rightChild == nullptr)
	{
		addNode(at->rightChild, toAdd);
		return;
	}
}

void BinaryTree::printChild(TreeNode* n) 
{
	if (n == nullptr) return;
	std::cout << "Left: " << n->leftChild << std::endl;
	std::cout << "Right: " << n->rightChild << std::endl;
	printChild(n->leftChild);
	printChild(n->rightChild);
}

int BinaryTree::height() const
{
	return 0;
}