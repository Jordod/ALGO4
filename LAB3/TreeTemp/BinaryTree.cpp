#include "BinaryTree.h"
#include <iostream>

using namespace std;

template<typename T>
BinaryTree<T>::BinaryTree() : root(nullptr) {}

template<typename T>
BinaryTree<T>::~BinaryTree()
{

}

template<typename T>
void BinaryTree<T>::add(T toAdd)
{
	if (root == nullptr) { root = new TreeNode(toAdd); return; };
	addNode(root, new TreeNode(toAdd));
}

template<typename T>
void BinaryTree<T>::addNode(TreeNode<T>* at, TreeNode<T>* toAdd)
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

template<typename T>
void BinaryTree<T>::print()
{
	print(root);
}

template<typename T>
void BinaryTree<T>::print(TreeNode<T>* n)
{
	if (n == nullptr) return;
	print(n->leftChild);
	cout << n->value << endl;
	print(n->rightChild);
}

template<typename T>
int BinaryTree<T>::height() const
{
	return height(root) - 1;
}

template<typename T>
bool BinaryTree<T>::find(TreeNode<T>* n, T x) const
{
	return false;
}

template<typename T>
//https://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/
int BinaryTree<T>::height(TreeNode<T>* n) const
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

template<typename T>
bool BinaryTree<T>::find(T x) const
{
	return find(root, x);
}

template<typename T>
bool BinaryTree<T>::find(TreeNode<T>* n, T x) const
{
	if (x == n->getValue()) return true;
	if (n->isLeaf()) return false;
	if (x < n->getValue())
		find(n->leftChild, x);
	else 
		find(n->rightChild, x);
}
