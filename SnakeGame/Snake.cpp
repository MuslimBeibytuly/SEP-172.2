#include "Snake.h"



Snake::Snake()
{
	sign = '*';
	body.push_back(Pixel(5, 5));
	body.push_back(Pixel(5, 6));
	body.push_back(Pixel(5, 7));
	body.push_back(Pixel(5, 8));
	direction = Default;
}

void Snake::move()
{
	int x = 0, y = 0;
	switch (direction) {
	case Up:
		y = -1;
		break;
	case Down:
		y = 1;
		break;
	case Left:
		x = -1;
		break;
	case Right:
		x = 1;
		break;
	}
	for (int i = body.size() - 1; i > 0; i--) {
		body[i].x = body[i - 1].x;
		body[i].y = body[i - 1].y;
	}
	body[0].x += x;
	body[0].y += y;
}

void Snake::eat(Pixel pixel)
{
	body.push_back(pixel);
}

void Snake::draw()
{
	for (Pixel pixel : body) {
		pixel.draw(sign);
	}
}


Snake::~Snake()
{
}
