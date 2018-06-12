#pragma once
#include <string>
class Card
{
	int value;
	std::string name;
public:
	std::string getName();
	int getValue();
	Card();
	Card(const int & value, const std::string & name);
	~Card();
};
