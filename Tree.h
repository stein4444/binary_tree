#pragma once
#include<iostream>
using std::cout;
struct Node
{
	int value;
	Node* left;
	Node* right;
	Node(int value, Node* left = nullptr, Node* right = nullptr) :
		value(value),left(left), right(right){}
};

class Tree
{
private:
	Node* root;
	
	void Add(int value, Node*& root);
	void PrintKLP(Node* elem)const;
	void PrintLKP(Node* elem) const;
	void PrintPKL(Node* elem) const;
	bool Find(Node* elem, int data);
	
public:
	Tree() : root(nullptr) {}
	void Add(int value);
	void PrintKLP()const;
	void PrintLKP() const;
	void PrintPKL() const;
	void Find(int data);
	~Tree();
	
};

