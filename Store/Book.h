#pragma once
#include <string>
class Book
{
public:
	std::string author, name, publisher;
	int year, numberOfPages;
	Book(std::string, std::string, std::string, int, int);
	Book();
	~Book();
};

