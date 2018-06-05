#include "Serializer.h"



void Serializer::serialize()
{

	std::ofstream snakeFile("snake.txt");
	for (auto coordinate : SnakeGame::getInstance().snake.body) 
	{
		snakeFile << coordinate.x << ' ' << coordinate.y << std::endl;
	}
	snakeFile.close();
	std::ofstream foodFile("food.txt");
	foodFile 
		<< SnakeGame::getInstance().food.body[0].x 
		<< ' '
		<< SnakeGame::getInstance().food.body[0].y 
		<< std::endl;
	foodFile.close();
}

void Serializer::deserialize()
{
	std::ifstream snakeFile("snake.txt");
	if (snakeFile.is_open())
	{
		SnakeGame::getInstance().snake.body.clear();
		short x, y;
		while (snakeFile >> x >> y) 
		{
			SnakeGame::getInstance().snake.body.push_back({ x, y });
			SnakeGame::getInstance().snake.direction = Snake::Default;
		}
	}
	snakeFile.close();
	std::ifstream foodFile("food.txt");
	if (foodFile.is_open())
	{
		SnakeGame::getInstance().food.body.clear();
		short x, y;
		foodFile >> x >> y;
		SnakeGame::getInstance().food.body.push_back({x, y});
	}
	foodFile.close();
}

Serializer::Serializer()
{
}


Serializer::~Serializer()
{
}
