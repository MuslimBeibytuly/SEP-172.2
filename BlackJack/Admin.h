#pragma once
#include <set>
#include <vector>
#include <array>
#include "Player.h"
#include "Card.h"
class Admin
{
public:
	std::vector<Card> generateCards(std::array<Card, 9> &);
	Admin();
	~Admin();
};

