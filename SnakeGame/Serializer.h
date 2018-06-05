#pragma once
#include <fstream>
#include "Snake.h"
#include "SnakeGame.h"
class Serializer
{
public:
	static void serialize();
	static void deserialize();
	Serializer();
	~Serializer();
};
