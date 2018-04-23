#include "Book.h"



Book::Book(std::string author, std::string name, std::string publisher, int year, int numberOfPages)
{
	this->author = author;
	this->name = name;
	this->publisher = publisher;
	this->year = year;
	this->numberOfPages = numberOfPages;
}

Book::Book()
{
}


Book::~Book()
{
}
