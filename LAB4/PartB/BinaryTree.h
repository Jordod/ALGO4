#pragma once
#include "TreeNode.h"
#include <vector>

class BinaryTree
{
private:
	TreeNode* root;
	void addNode(TreeNode* at, TreeNode* toAdd);
	void print(TreeNode* n);
	int maxValue(TreeNode* n) const;
	int height(TreeNode* n) const;
	bool hasPathSum(TreeNode* n, int sum) const;
	void printPaths(TreeNode* n, std::vector<int>& path);
	int minValue(TreeNode* n) const;
	bool isBST(TreeNode* n, int min, int max);

public:
	BinaryTree();
	~BinaryTree();
	void add(int toAdd);
	void print();
	int height() const;
	bool hasPathSum(int sum) const;
	void printPaths();
	int minValue() const;
	int maxValue() const;
	bool isBST();
};

