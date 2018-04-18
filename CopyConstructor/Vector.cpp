#include "Vector.h"



Vector::Vector(const Vector & another)
{
	this->size = another.size;
	this->a = new int[this->size];
	for (int i = 0; i < this->size; ++i) 
	{
		this->a[i] = another.a[i];
	}
}

Vector::Vector(int size)
{
	this->size = size;
	a = new int[size];
	for (int i = 0; i < size; ++i) {
		a[i] = i;
	}
}


Vector::~Vector()
{
	delete[] a;
}
