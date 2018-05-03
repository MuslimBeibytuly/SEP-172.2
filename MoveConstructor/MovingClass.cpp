#include "MovingClass.h"



MovingClass::MovingClass()
{
	s = "lol";
}

MovingClass::MovingClass(MovingClass && some)
{
	s = std::move(some.s);
}


MovingClass::~MovingClass()
{
}
