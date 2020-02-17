#pragma once
#include "TreeNode.h"

class BinaryTree
{
private:
	TreeNode* root;
	void addNode(TreeNode* at, TreeNode* toAdd);
	void print(TreeNode* n);
	int height(TreeNode* n) const;
	bool hasPathSum(TreeNode* n, int sum) const;
	
public:
	BinaryTree();
	~BinaryTree();
	void add(int toAdd);
	void print();
	int height() const;
	bool hasPathSum(int sum) const;
};