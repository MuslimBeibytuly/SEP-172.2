#pragma once
#include <string>
class MovingClass
{
public:
	std::string s;
	MovingClass();
	MovingClass(MovingClass &&);
	~MovingClass();
};
