#pragma once
#include "Pixel.h"
#include <vector>
class Snake
{
	char sign;
public:
	std::vector<Pixel> body;
	enum Direction { Up, Down, Left, Right, Default };
	Direction direction;
	Snake();
	void move();
	void eat(Pixel pixel);
	void draw();
	~Snake();
};

