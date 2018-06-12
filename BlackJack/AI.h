#pragma once
#include "Player.h"
#include <cstdlib>
#include <ctime>
class AI : public Player
{
public:
	Card choose(std::vector<Card> &) override final;
	AI(const std::string &);
	~AI();
};
