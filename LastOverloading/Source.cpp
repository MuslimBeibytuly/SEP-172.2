#include <iostream>
#include "Progression.h"
Progression operator +(Progression & a, Progression & b) {
	Progression c;
	c.setA1(a.getA1() + b.getA1());
	c.setD(a.getD() + b.getD());
	return c;
}

void main() 
{
	Progression a, b;
	Progression c = a + b;

}