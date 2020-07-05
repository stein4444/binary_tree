#include "Tree.h"

void Tree::Add(int value)
{
	Add(value, root);
}

void Tree::Add(int value, Node*& root)
{
	if (root == nullptr)
	{
		root = new Node(value);
		return;
	}
	if (value > root->value)
		Add(value, root->right);
	else
		Add(value, root->left);
}


void Tree::PrintKLP(Node* elem) const
{
	if (elem != nullptr) {
		//K
		cout << elem->value << " ";
		//L
		PrintKLP(elem->left);
		//P
		PrintKLP(elem->right);
	}

}

void Tree::PrintLKP(Node* elem) const
{
	if (elem != nullptr) {
		//L
		PrintLKP(elem->left);
		//K
		cout << elem->value << " ";
		//P
		PrintLKP(elem->right);
	}
}

void Tree::PrintPKL(Node* elem) const
{
	if (elem != nullptr) {
		//P
		PrintPKL(elem->right);
		//K
		cout << elem->value << " ";
		//L
		PrintPKL(elem->left);
	}
}

bool Tree::Find(Node* elem, int data)
{
	while (root != NULL) {
		// pass right subtree as new tree 
		if (data > root->value)
			root = root->right;

		// pass left subtree as new tree 
		else if (data < root->value)
			root = root->left;
		else
			return true;
	}
	return false;
}

void Tree::PrintKLP() const
{
	PrintKLP(root);
}

void Tree::PrintLKP() const
{
	PrintLKP(root);
}

void Tree::PrintPKL() const
{
	PrintPKL(root);
}

void Tree::Find(int data)
{
	Find(root, data);
}

Tree::~Tree()
{
	if (root->left != nullptr)
	{
		delete root->left;
	}
	if (root->right != nullptr)
	{
		delete root->right;
	}
}
