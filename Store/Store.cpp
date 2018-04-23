#include "Store.h"



Store::Store()
{
	books.push_back(Book("Dostoevskiy", "Crime and Punishment", "N", 2018, 400));
	books.push_back(Book("Dostoevskiy", "Crime and Punishment", "N", 2018, 400));
	books.push_back(Book("Dostoevskiy", "Crime and Punishment", "N", 2018, 400));
	books.push_back(Book("Dostoevskiy", "Crime and Punishment", "N", 2018, 400));
	books.push_back(Book("Dostoevskiy", "Crime and Punishment", "N", 2018, 400));
	books.push_back(Book("Dostoevskiy", "Crime and Punishment", "N", 2018, 400));
	books.push_back(Book("Dostoevskiy", "Crime and Punishment", "N", 2018, 400));
}


Store::~Store()
{
}

std::vector<Book> Store::filterBooksByAuthor(std::string author) const
{
	std::vector<Book> result;
	for (Book book : books) 
	{
		if (book.author == author) 
		{
			result.push_back(book);
		}
	}
	return result;
}
