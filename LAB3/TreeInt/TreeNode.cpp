#include "TreeNode.h"

TreeNode::TreeNode(int value) : value(value), leftChild(nullptr), rightChild(nullptr) {}

int TreeNode::getValue() const
{
	return TreeNode::value;
}