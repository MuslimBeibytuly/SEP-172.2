#include "PosInt.h"
#include <iostream>
void main() 
{
	Int * x = new PosInt();
	x->setValue(-1);
	std::cout << x->getValue() << std::endl;
	delete x;
	system("pause");
}