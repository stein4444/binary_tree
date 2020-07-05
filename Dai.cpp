#include "Dai.h"

void DAI::AddNew(string carNumb, string violation, Node*& root)
{
	if (root == nullptr) {
		root = new Node(carNumb, violation);
		return;
	}
	if (carNumb > root->carNumb)
		AddNew(carNumb, violation, root->right);
	else
		AddNew(carNumb, violation, root->left);

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

void DAI::AddNew(string carNumb, string violation)
{
	AddNew(carNumb, violation, root);

}

void DAI::PrintKLP() const
{
	PrintKLP(root);
}

string DAI::Seearch(string carNumb) const
{
	return Seach(carNumb, root);
}

void DAI::Add(string violation)
{
	Add(root, violation);
}

void DAI::Add(Node* root, string violation)
{
	if (root == nullptr) {
		root = new Node(root->carNumb,root->violation);
		return;
	}
	if (violation < root->carNumb)
		Add(root->left, violation);
	else
		Add(root->right, violation);



}
