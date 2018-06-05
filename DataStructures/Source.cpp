#include <iostream>
#include <list>
#include "LinkedList.h"
void main() 
{
	LinkedList<int> l;
	l.addToTail(5);
	l.addToTail(10);
	l.addToTail(9);
	l.addToTail(8);
	l.addToTail(1);
	l.addToTail(8);
	l.addToTail(7);
	l.addToTail(8);
	size_t x = 1, y = 2;
	/*std::cout << l[x] << std::endl;
	auto result = l.searchByValue(8);
	for (auto it : result) 
	{
		std::cout << it << ' ';
	}*/
	l.reverse();
	std::cout << l;
	system("pause");
}