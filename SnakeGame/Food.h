#pragma once
#include "Pixel.h"
class Food
{
	char sign;
public:
	Pixel body;
	Food();
	void regenerate();
	void draw();
	~Food();
};

