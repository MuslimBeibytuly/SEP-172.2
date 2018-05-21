#include "Person.h"



Person::Person(std::string name)
{
	this->name = name;
	std::cout << "Person()" << std::endl;
}


Person::~Person()
{
	std::cout << "~Person()" << std::endl;
}
