#pragma once
#include "Person.h"
#include "Horse.h"
#include <iostream>
class HorseMan: public Person, public Horse
{
public:
	HorseMan(std::string name);
	~HorseMan();
};
