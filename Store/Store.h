#pragma once
#include "Book.h"
#include <vector>
class Store
{
public:
	std::vector<Book> books;
	Store();
	~Store();
	std::vector<Book> filterBooksByAuthor(std::string) const;
};

