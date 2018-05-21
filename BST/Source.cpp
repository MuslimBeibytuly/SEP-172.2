#include "BST.h"
#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <string>
void main()
{
	std::set<int> set;
	set.insert({ 5, 6, 4, 1, 2, 4, 6, 9, 10 });
	std::multiset<int> multiset;
	multiset.insert({ 5, 6, 4, 1, 2, 4, 6, 9, 10 });
	std::cout << "set: " << std::endl;
	for (auto element : set)
	{
		std::cout << element << std::endl;
	}
	std::cout << "multiset: " << std::endl;
	for (auto element : multiset)
	{
		std::cout << element << std::endl;
	}
	std::map<std::string, int> map;
	std::unordered_map < std::string, std::set<int> > unordered_map;
	/*BST<int> tree;
	tree.addBSTNode(5);
	tree.addBSTNode(7);
	tree.addBSTNode(5);
	tree.addBSTNode(3);
	tree.addBSTNode(10);*/
	system("pause");
}