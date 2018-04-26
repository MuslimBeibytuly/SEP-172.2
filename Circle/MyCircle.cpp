#include "MyCircle.h"



MyCircle::MyCircle(int radius)
{
	this->radius = radius;
}

MyCircle::MyCircle()
{
}


MyCircle::~MyCircle()
{
}

bool MyCircle::operator==(const MyCircle & circle) const
{
	return this->radius == circle.radius;
}

void * MyCircle::operator new(size_t size)
{
	void *ptr = malloc(size);
	if (ptr == NULL) 
	{
		throw std::bad_alloc();
	}
	return ptr;
}

MyCircle & operator+=(MyCircle & mc, int value)
{
	mc.radius += value;
	return mc;
}

std::ostream & operator<<(std::ostream & os, const MyCircle & mc)
{
	os << mc.radius;
	return os;
}

