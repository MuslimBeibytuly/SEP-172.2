#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	void move() override {
		std::cout << "No, I'm overloaded" << name << std::endl;
	}
	Dog();
	~Dog();
};
