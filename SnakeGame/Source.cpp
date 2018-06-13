#include "SnakeGame.h"
#include <SFML\Graphics.hpp>
int main() 
{
	sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");
	sf::RectangleShape shape(sf::Vector2f(200, 200));
	shape.move(sf::Vector2f(200, 200));
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) 
			{
				shape.move(sf::Vector2f(-200, 0));
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) 
			{
				shape.move(sf::Vector2f(200, 0));
			}
		}

		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}
