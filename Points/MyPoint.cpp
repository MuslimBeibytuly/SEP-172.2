#include "MyPoint.h"

MyPoint::MyPoint(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

MyPoint::MyPoint()
{
}


MyPoint::~MyPoint()
{
}

MyPoint::operator int()
{
	return int(x + y + z);
}

std::ostream & operator <<(std::ostream & os, const MyPoint & mp)
{
	os << mp.x << ' ' << mp.y << ' ' << mp.z;
	return os;
}

std::istream & operator >> (std::istream & is, MyPoint & mp)
{
	is >> mp.x >> mp.y >> mp.z;
	return is;
}
