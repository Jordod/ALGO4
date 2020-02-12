#pragma once
#include "TreeNode.h"
template<typename T>

class BinaryTree
{
private:
	TreeNode<T>* root;
	void addNode(TreeNode<T>* at, TreeNode<T>* toAdd);
	void print(TreeNode<T>* n);
	int height(TreeNode<T>* n) const;
	bool find(TreeNode<T>* n, T x) const;

public:
	BinaryTree();
	~BinaryTree();
	void add(T toAdd);
	void print();
	int height() const;
	bool find(T x) const;
};