#include <SFML\Graphics.hpp>
#include "SFMLSnake.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");
	SFMLSnake snake;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (event.type == sf::Event::KeyPressed) 
			{
				float dx = 0, dy = 0;
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					dx = -50;
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					dx = 50;
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					dy = -50;
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					dy = 50;
				}
				snake.move(dx, dy);
			}
		}
		window.clear();
		for (auto & point : snake.body)
		{
			window.draw(point);
		}
		window.display();
	}
	return 0;
}
