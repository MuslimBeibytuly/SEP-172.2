#pragma once
#include <windows.h>
#include <conio.h>
#include <iostream>
class Pixel
{
public:
	short x, y;
	Pixel(short x, short y);
	void draw(const char & sign);
	Pixel();
	~Pixel();
};

