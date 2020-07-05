#include "Dai.h"

void DAI::Add(string carNumb, string violation, Node*& root)
{
	if (root == nullptr) {
		root = new Node(carNumb, violation);
		return;
	}
	if (carNumb > root->carNumb)
		Add(carNumb, violation, root->right);
	else
		Add(carNumb, violation, root->left);
}

void DAI::PrintKLP(Node* elem) const
{
	if (elem != nullptr)
	{
		cout << elem->carNumb << "\n" << elem->violation << ", ";
		PrintKLP(elem->left);
		PrintKLP(elem->right); 
		cout << std::endl;

	}
}

string DAI::Seach(string carNumb, Node* root) const
{
	if (root == nullptr)
		return 0;
	if (carNumb > root->carNumb)
		Seach(carNumb, root->right);
	else if (carNumb < root->carNumb)
		Seach(carNumb, root->left);
	else
		return root->violation;
}

void DAI::Add(string carNumb, string violation)
{
	Add(carNumb, violation, root);
}

void DAI::PrintKLP() const
{
	PrintKLP(root);
}

string DAI::Seearch(string carNumb) const
{
	return Seach(carNumb, root);
}
