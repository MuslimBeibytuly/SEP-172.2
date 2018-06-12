#include "Card.h"

std::string Card::getName()
{
	return name;
}

int Card::getValue()
{
	return value;
}

Card::Card()
{
}

Card::Card(const int & value, const std::string & name)
	: value(value), name(name)
{
}

Card::~Card()
{
}
