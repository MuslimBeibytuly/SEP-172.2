#include "AI.h"

Card AI::choose(std::vector<Card> & cards)
{
	srand(time(NULL));
	return cards[rand() % 3];
}

AI::AI(const std::string & name)
	: Player(name)
{
}

AI::~AI()
{
}
