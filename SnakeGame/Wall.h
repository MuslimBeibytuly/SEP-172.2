#pragma once
#include <vector>
#include "Pixel.h"
class Wall
{
	char sign;
public:
	std::vector<Pixel> body;
	Wall();
	void draw();
	~Wall();
};

