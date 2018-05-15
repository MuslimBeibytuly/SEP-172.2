#include <iostream>
#include <list>
#include "LinkedList.h"
void main() 
{

	LinkedList<int> l;
	l.addToTail(5);
	l.addToTail(10);
	l.addToTail(9);
	l.addToTail(9);
	l.addToTail(8);
	l.addToTail(7);
	l.addToTail(6);
	l.deleteByValue(9);
	std::cout << l;
	system("pause");
}