#pragma once
#include "Pixel.h"
#include <vector>
class Dino
{
	char sign;
	std::vector<Pixel> body;
public:
	bool isJumping;
	Dino();
	~Dino();
	void draw();
	void jump();
	void settle();
};

