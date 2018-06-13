#pragma once
#include <vector>
#include <SFML\Graphics\RectangleShape.hpp>
class SFMLSnake
{
public:
	std::vector<sf::RectangleShape> body;
	void move(const float & x, const float & y);
	SFMLSnake();
	~SFMLSnake();
};

