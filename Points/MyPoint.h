#pragma once
#include <ostream>
#include <istream>
#include <iostream>
class MyPoint
{
public:
	int x, y, z;
	MyPoint(int, int, int);
	MyPoint();
	~MyPoint();
	friend std::ostream & operator <<(std::ostream &, const MyPoint &);
	friend std::istream & operator >> (std::istream &, MyPoint &);
	operator int();
};

