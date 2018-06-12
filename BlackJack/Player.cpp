#include "Player.h"

Player::Player(const std::string & name) : name(name)
{
}

std::string Player::getName()
{
	return name;
}

Player::~Player()
{
}
