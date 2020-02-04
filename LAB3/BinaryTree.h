#pragma once
#include "TreeNode.h"

class BinaryTree
{
private:

	
public:
	TreeNode* root;
	void addNode(TreeNode* at, TreeNode* toAdd);
	void printChild(TreeNode* n);
	BinaryTree();
	~BinaryTree();
	void add(int toAdd);
	int height() const;
};