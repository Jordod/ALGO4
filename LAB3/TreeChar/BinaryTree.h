#pragma once
#include "TreeNode.h"

class BinaryTree
{
private:
	TreeNode* root;
	void addNode(TreeNode* at, TreeNode* toAdd);
	void print(TreeNode* n);
	int height(TreeNode* n) const;
	bool find(char x) const;

public:
	BinaryTree();
	~BinaryTree();
	void add(char toAdd);
	void print();
	int height() const;
	bool find(TreeNode* n, char x) const;
};