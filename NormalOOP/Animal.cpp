#include "Animal.h"



void Animal::move()
{
	std::cout << "I move as: " << name << std::endl;
}

Animal::Animal()
{
	name = "animal";
	std::cout << "Animal()" << std::endl;
}


Animal::~Animal()
{
	std::cout << "~Animal()" << std::endl;
}
