#pragma once
#include "Dino.h"
#include "Ground.h"
#include "Cactus.h"
class Game
{
	Dino dino;
	Ground ground;
	Cactus cactus;
	bool isActive;
public:
	Game();
	void play();
	~Game();
};

