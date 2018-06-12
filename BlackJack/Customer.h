#pragma once
#include "Player.h"
#include <iostream>
class Customer : public Player
{
public:
	Card choose(std::vector<Card> &) override final;
	Customer(const std::string &);
	~Customer();
};

