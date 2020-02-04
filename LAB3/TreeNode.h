#pragma once
class TreeNode
{
	friend class BinaryTree;

private:
	int value;
	TreeNode* leftChild;
	TreeNode* rightChild;
public:
	TreeNode(int value);
	int getValue() const;
};