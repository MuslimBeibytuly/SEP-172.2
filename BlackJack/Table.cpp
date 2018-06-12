#include "Table.h"

Table::Table()
{
}

void Table::init()
{
	cards[0] = Card(1, "6");
	cards[1] = Card(2, "7");
	cards[2] = Card(3, "8");
	cards[3] = Card(4, "9");
	cards[4] = Card(5, "10");
	cards[5] = Card(6, "J");
	cards[6] = Card(7, "Q");
	cards[7] = Card(8, "K");
	cards[8] = Card(9, "A");
	players.push_back(new Customer("Customer"));
	players.push_back(new AI("AI"));
	for (Player * player : players)
	{
		score.insert({ player, 0 });
	}
}

void Table::play()
{
	for (size_t i = 0; i < 5; ++i)
	{
		for (Player * player : players)
		{
			score[player] += player->choose(admin.generateCards(cards)).getValue();
		}
	}
	for (Player * player : players) 
	{
		std::cout << player->getName() << ' ' << score[player] << std::endl;
	}
}

Table & Table::getInstance()
{
	static Table instance;
	return instance;
}

Table::~Table()
{
	for (Player * player : players)
	{
		delete player;
	}
}
