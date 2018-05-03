#include "SnakeGame.h"

SnakeGame::SnakeGame()
{
	state = Started;
}

void SnakeGame::play()
{
	state = Playing;
	while (state == Playing) 
	{
		system("cls");
		if (_kbhit()) 
		{
			char action = _getch();
			switch (action) 
			{
			case 'w':
				snake.direction = Snake::Up;
				break;
			case 's':
				snake.direction = Snake::Down;
				break;
			case 'a':
				snake.direction = Snake::Left;
				break;
			case 'd':
				snake.direction = Snake::Right;
				break;
			default:
				break;
			}
		}
		if (snakeEatsFood()) {
			snake.eat(food.body);
			food.regenerate();
		}
		snake.move();
		snake.draw();
		food.draw();
		Sleep(100);
	}
}

bool SnakeGame::snakeEatsFood()
{
	return (snake.body[0] == food.body);
}

SnakeGame::~SnakeGame()
{
}
