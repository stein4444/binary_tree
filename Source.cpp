#include<iostream>
#include"Tree.h"
#include"Dai.h"
int main()
{
	DAI viol;
	viol.AddNew("BK 2233", "any violation");
	viol.PrintKLP();
	//додавання не працює не знаю чому

	system("pause");
	viol.Add("second");
	viol.PrintKLP();
	return 0;
}