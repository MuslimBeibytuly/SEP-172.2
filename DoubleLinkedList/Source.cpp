#include "DoubleLinkedList.h"
#include <iostream>
void main() 
{
	DoubleLinkedList<int> l;
	l.addToTail(1);
	l.addToTail(2);
	l.addToHead(3);
	l.deleteFromTail();
	std::cout << l;
	system("pause");
}