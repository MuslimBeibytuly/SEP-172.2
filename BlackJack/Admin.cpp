#include "Admin.h"

std::vector<Card> Admin::generateCards(std::array<Card, 9> & cards)
{
	std::set<Card> temp;
	std::vector<Card> result;
	while (3 > temp.size())
	{
		temp.insert(cards[rand() % 9]);
	}
	for (Card card : temp)
	{
		result.push_back(card);
	}
	return result;
}

Admin::Admin()
{
}


Admin::~Admin()
{
}
