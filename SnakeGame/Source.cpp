#include <SFML\Graphics.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");
	std::vector<sf::RectangleShape> shapes;
	shapes.push_back(sf::RectangleShape(sf::Vector2f(200, 200)));
	shapes[0].setPosition(200, 200);
	shapes.push_back(sf::RectangleShape(sf::Vector2f(200, 200)));
	shapes[1].setPosition(0, 200);
	for (auto & shape : shapes) 
	{
		shape.setFillColor(sf::Color::Green);
	}

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			{
				shapes[1].setPosition(shapes[0].getPosition());
				shapes[0].setPosition(shapes[0].getPosition() + sf::Vector2f(-200, 0));
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				shapes[1].setPosition(shapes[0].getPosition());
				shapes[0].setPosition(shapes[0].getPosition() + sf::Vector2f(200, 0));
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				shapes[1].setPosition(shapes[0].getPosition());
				shapes[0].setPosition(shapes[0].getPosition() + sf::Vector2f(0, -200));
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				shapes[1].setPosition(shapes[0].getPosition());
				shapes[0].setPosition(shapes[0].getPosition() + sf::Vector2f(0, 200));
			}
		}
		window.clear();
		for (auto & shape : shapes)
		{
			window.draw(shape);
		}
		window.display();
	}
	return 0;
}
