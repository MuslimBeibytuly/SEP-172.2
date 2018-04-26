#include "Airplane.h"


Airplane::Airplane(Volume v)
{
	capacity = v;
}


Airplane::~Airplane()
{
}

bool Airplane::operator==(const Airplane & a) const
{
	return capacity == a.capacity;
}

bool Airplane::operator >(const Airplane & a) const
{
	return capacity > a.capacity;
}

Airplane & operator++(Airplane & a)
{
	++a.passengers;
	return a;
}
