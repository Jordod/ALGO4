#pragma once
class TreeNode
{
	friend class BinaryTree;
	
private:
	char value;
	TreeNode* leftChild;
	TreeNode* rightChild;
public:
	TreeNode(char value);
	char getValue() const;
	bool isLeaf() const;
};