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
		int size = rand() % 2;
		body.clear();
		if (size == 1) {
			body.push_back(Pixel(48, 14));
		}
		else {
			body.push_back(Pixel(48, 13));
			body.push_back(Pixel(48, 14));
		}
		for (Pixel & pixel : body) {
			pixel.x = 20;
		}
	}
}

Cactus::Cactus()
{
	sign = 'f';
	body.push_back(Pixel(48, 13));
	body.push_back(Pixel(48, 14));
}


Cactus::~Cactus()
{
}
