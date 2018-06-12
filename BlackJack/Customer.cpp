#include "Customer.h"

Card Customer::choose(std::vector<Card> & cards)
{
	std::cout << "Suggested cards: " << std::endl;
	int cnt = 0;
	for (Card & card : cards) 
	{
		std::cout << ++cnt << ' ' << card.getName() << std::endl;
	}
	int choice;
	std::cout << "Please choose: ";
	std::cin >> choice;
	try 
	{
		return cards[choice - 1];
	}
	catch (...) 
	{
		std::cout << "Error, you're cheater" << std::endl;
	}
}

Customer::Customer(const std::string & name)
	: Player(name)
{
}

Customer::~Customer()
{
}
