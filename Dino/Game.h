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
	short width, height;
	Game();
public:
	static Game & getInstance();
	void play();
	bool checkIfDinoCrushes();
	bool checkIfDinoSettles();
	~Game();
};
