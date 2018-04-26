#pragma once
#include "Pixel.h"
#include <vector>
class Cactus
{
	char sign;
	std::vector<Pixel> body;
public:
	void draw();
	void move();
	Cactus();
	~Cactus();
};

