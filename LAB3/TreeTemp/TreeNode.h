#pragma once
template<typename T>
class TreeNode
{
	friend class BinaryTree;
	
private:
	T value;
	TreeNode* leftChild;
	TreeNode* rightChild;
public:
	TreeNode(T value);
	char getValue() const;
	bool isLeaf() const;
};