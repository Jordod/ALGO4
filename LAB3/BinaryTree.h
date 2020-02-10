#pragma once
#include "TreeNode.h"

class BinaryTree
{
private:
	TreeNode* root;
	void addNode(TreeNode* at, TreeNode* toAdd);
	void print(TreeNode* n);
	
public:
	BinaryTree();
	~BinaryTree();
	void add(int toAdd);
	void print();
	int height() const;
};