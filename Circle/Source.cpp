#include <iostream>
#include "MyCircle.h"
int main()
{
	MyCircle c1(1);
	c1 += 6;
	std::cout << c1 << std::endl;
	system("pause");
	return 0;
}