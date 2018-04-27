#pragma once
#include "Snake.h"
#include "Food.h"
class SnakeGame
{
	enum State { Started, Playing, Pause, Quit };
	
	Food food;
	State state;
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
	~SnakeGame();
};

