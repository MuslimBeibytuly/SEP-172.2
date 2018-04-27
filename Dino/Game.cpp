#include "Game.h"
Game::Game()
{
	width = 50, height = 50;
}

Game & Game::getInstance()
{
	static Game instance;
	return instance;
}

void Game::play()
{
	isActive = true;
	while (isActive)
	{
		system("cls");
		cactus.move();
		if (_kbhit())
		{
			char action = _getch();
			switch (action)
			{
			case 'w':
				dino.jump();
				dino.isJumping = true;
				break;
			case 'q':
				isActive = false;
				break;
			default:
				break;
			}
		}
		else
		{
			if (dino.isJumping) 
			{
				dino.settle();
				if (!checkIfDinoSettles()) 
				{
					dino.isJumping = false;
				}
			}
		}
		isActive = !checkIfDinoCrushes();
		dino.draw();
		ground.draw();
		cactus.draw();
		Sleep(200);
	}
	system("cls");
	Pixel::gotoXY(5, 5);
	std::cout << "You're done";
}

bool Game::checkIfDinoCrushes()
{
	for (Pixel & p1 : dino.body) 
	{
		for (Pixel & p2 : cactus.body) 
		{
			if (p1 == p2) 
			{
				return true;
			}
		}
	}
	return false;
}

bool Game::checkIfDinoSettles()
{
	return dino.body[3].y < (ground.body[0].y - 1);
}


Game::~Game()
{
}
