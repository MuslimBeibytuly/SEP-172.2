#include "BST.h"
#include <iostream>
void main() 
{
	BST<int> tree;
	tree.addBSTNode(5);
	tree.addBSTNode(7);
	tree.addBSTNode(5);
	tree.addBSTNode(3);
	tree.addBSTNode(10);
	system("pause");
}