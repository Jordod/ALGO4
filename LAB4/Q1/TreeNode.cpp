#include "TreeNode.h"

TreeNode::TreeNode(char value) : value(value), leftChild(nullptr), rightChild(nullptr) {}

char TreeNode::getValue() const
{
	return TreeNode::value;
}

bool TreeNode::isLeaf() const
{
	if (leftChild == nullptr && rightChild == nullptr) return true;
	return false;
}
