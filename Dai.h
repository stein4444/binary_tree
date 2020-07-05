#pragma once
#include<iostream>
#include<string>
using std::cout;
using std::string;

class DAI
{

private:
struct Node
{
	string carNumb;
	string violation;
	Node* left;
	Node* right;
	Node (string carNumb, string violation,
		Node* left = nullptr, Node* right = nullptr)
		: carNumb(carNumb), violation(violation), left(left),right(right)
	{}
};
	Node* root;
	void AddNew(string carNumb, string violation, Node*& root);
	void PrintKLP(Node* elem)const;
	string Seach(string carNumb, Node* root)const;
	void Add(Node* root, string violation);
public:
	DAI():root(nullptr){}
	void AddNew(string carNumb, string violation);
	void PrintKLP()const;
	string Seearch(string carNumb)const;
	void Add(string violation);
};

