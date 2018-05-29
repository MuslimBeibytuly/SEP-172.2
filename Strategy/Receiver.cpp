#include "Receiver.h"



void Receiver::useStrategy()
{
	operation->use();
}

void Receiver::setStrategy(Strategy * s)
{
	operation = s;
}

void Receiver::getType(std::string s)
{
	try 
	{
		std::stoi(s);
		setStrategy(new FirstStrategy());
	}
	catch (const std::exception & e) 
	{
		setStrategy(new SecondStrategy());
	}
}

Receiver::Receiver()
{
}


Receiver::~Receiver()
{
}
