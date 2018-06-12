#pragma once
#include <string>
#include <vector>
#include "Card.h"
class Player
{
	std::string name;
public:
	Player(const std::string &);
	std::string getName();
	virtual Card choose(std::vector<Card> &) = 0;
	virtual ~Player();
};
