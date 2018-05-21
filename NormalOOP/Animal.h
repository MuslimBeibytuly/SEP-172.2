#pragma once
#include <string>
#include <iostream>
class Animal
{
public:
	std::string name;
	virtual void move();
	Animal();
	virtual ~Animal();
};

