#pragma once
#include "Pixel.h"
#include <vector>
class Ground
{
	char sign;
	std::vector<Pixel> body;
public:
	Ground();
	~Ground();
	void draw();
};

