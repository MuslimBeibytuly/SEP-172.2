#include "Reservoir.h"

int Reservoir::getId() const
{
	return id;
}

void Reservoir::setId(int id)
{
	this->id = id;
}

double Reservoir::getVolume() const
{
	return width * length * depth;
}

double Reservoir::getArea() const
{
	return width * length;
}

bool Reservoir::typeEquals(const Reservoir & another) const
{
	if (type == another.type) 
	{
		return true;
	}
	return false;
}

bool Reservoir::hasAreaMoreThan(Reservoir & another) 
{
	if (typeEquals(another)) 
	{
		return getArea() > another.getArea();
	}
	else 
	{
		std::cout << "types are incompatible" << std::endl;
	}
}

Reservoir::Reservoir(const Reservoir & another)
{
	this->name = another.name;
	this->type = another.type;
	this->depth = another.depth;
	this->length = another.length;
	this->width = another.width;
}

Reservoir::Reservoir(std::string name) 
{
	id = cnt++;
	this->name = name;
}

Reservoir::Reservoir()
{
	id = cnt++;
}

Reservoir::~Reservoir()
{
}
