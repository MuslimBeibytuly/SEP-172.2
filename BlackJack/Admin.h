#pragma once
#include <vector>
#include <array>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "Card.h"
class Admin
{
public:
	std::vector<Card> generateCards(std::array<Card, 9> &);
	Admin();
	~Admin();
};

