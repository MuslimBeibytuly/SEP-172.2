#include "Cactus.h"



void Cactus::draw()
{
	for (Pixel pixel : body) {
		pixel.draw(sign);
	}
}

void Cactus::move()
{
	for (Pixel & pixel : body) {
		pixel.x--;
	}
	if (body[0].x < 1)
	{
		for (Pixel & pixel : body) {
			pixel.x = 20;
		}
	}
}

Cactus::Cactus()
{
	body.push_back(Pixel(20, 3));
	body.push_back(Pixel(20, 4));
}


Cactus::~Cactus()
{
}
