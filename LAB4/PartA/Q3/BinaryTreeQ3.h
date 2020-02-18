#pragma once
#include "TreeNode.h"
#include <vector>

class BinaryTree
{
private:
	TreeNode* root;
	void addNode(TreeNode* at, TreeNode* toAdd);
	void print(TreeNode* n);
	int height(TreeNode* n) const;
	bool hasPathSum(TreeNode* n, int sum) const;

	void printPaths(TreeNode* n, std::vector<int>& path);
	
public:
	BinaryTree();
	~BinaryTree();
	void add(int toAdd);
	void print();
	int height() const;
	bool hasPathSum(int sum) const;
	void printPaths();
};

