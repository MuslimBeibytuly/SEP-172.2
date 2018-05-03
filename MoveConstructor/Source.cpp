#include "MovingClass.h"
#include <iostream>
void main()
{
	MovingClass m1;
	std::cout << "Before moving: " << m1.s << std::endl;
	MovingClass m2 = std::move(m1);
	std::cout << "After moving: " << m1.s << std::endl;
	std::cout << "m2.s: " << m2.s << std::endl;
	system("pause");
}