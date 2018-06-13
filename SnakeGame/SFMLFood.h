#pragma once
#include <vector>
#include <cstdlib>
#include <SFML\Graphics\RectangleShape.hpp>
class SFMLFood
{
public:
	std::vector<sf::RectangleShape> body;
	void regenerate(std::vector<sf::RectangleShape> &);
	SFMLFood();
	~SFMLFood();
};