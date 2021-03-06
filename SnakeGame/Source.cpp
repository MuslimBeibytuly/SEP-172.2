#include <SFML\Graphics.hpp>
#include "SFMLSnake.h"
#include "SFMLFood.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");
	SFMLSnake snake;
	SFMLFood food;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if( sf::Keyboard::Space)
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
		if (snake.body[0].getPosition() == food.body[0].getPosition()) 
		{
			snake.eat();
			food.regenerate(snake.body);
		}
		window.draw(food.body[0]);
		window.display();
	}
	return 0;
}
