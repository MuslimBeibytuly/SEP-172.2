#include "Passport.h"

Passport::Passport()
{
	docId = rand() % 1000000, timestamp = 123456;
	name = "LOL LOL LOL";
}


Passport::~Passport()
{
}

void Passport::print()
{
	std::cout << 
		name << ' ' << 
		docId << ' ' << 
		timestamp << std::endl;
}
