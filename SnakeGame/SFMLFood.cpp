#include "SFMLFood.h"



void SFMLFood::regenerate(std::vector<sf::RectangleShape> & snake)
{
	body[0].setPosition((rand() % 32) * 50, (rand() % 18) * 50);
	for (sf::RectangleShape & element : snake)
	{
		if (body[0].getPosition() == element.getPosition())
		{
			regenerate(snake);
		}
	}
}

SFMLFood::SFMLFood()
{
	body.push_back(sf::RectangleShape(sf::Vector2f(50, 50)));
	body[0].setPosition(200, 200);
	body[0].setFillColor(sf::Color::Cyan);
}



SFMLFood::~SFMLFood()
{
}
