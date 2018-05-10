#include "Food.h"
#include "SnakeGame.h"

Food::Food()
{
	sign = '@';
	body = { 3, 3 };
}

void Food::regenerate()
{
	body = { rand() % 18 + 2, rand() % 18 + 2 };
	for (Pixel & pixel : SnakeGame::getInstance().snake.body)
	{
		if (body == pixel)
		{
			regenerate();
		}
	}
}

void Food::draw()
{
	body.draw(sign);
}

Food::~Food()
{
}
