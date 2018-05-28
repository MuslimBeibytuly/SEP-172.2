#pragma once
#include "Snake.h"
#include "Food.h"
#include "Wall.h"
#include "Drawer.h"

class SnakeGame
{
	enum State { Started, Playing, Pause, Quit };
	State state;
	Food food;
	Wall wall;
	SnakeGame();
public:
	Snake snake;
	static SnakeGame & getInstance()
	{
		static SnakeGame instance;
		return instance;
	}
	void play();
	bool snakeEatsFood();
	bool snakeCrushesIntoWall();
	~SnakeGame();
};

