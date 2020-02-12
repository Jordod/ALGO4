#include "TreeNode.h"

template<typename T>
TreeNode<T>::TreeNode(T value) : value(value), leftChild(nullptr), rightChild(nullptr) {}

template<typename T>
char TreeNode<T>::getValue() const
{
	return TreeNode::value;
}

template<typename T>
bool TreeNode<T>::isLeaf() const
{
	if(leftChild == nullptr && rightChild == nullptr) return true;
	return false;
}
