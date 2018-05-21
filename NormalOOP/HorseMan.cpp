#include "HorseMan.h"



HorseMan::HorseMan(std::string name) : Person(name)
{
	std::cout << "HorseMan()" << std::endl;
}


HorseMan::~HorseMan()
{
	std::cout << "~HorseMan()" << std::endl;
}
