#include "Dog.h"
void sample() 
{
	Animal * a = new Dog();
	a->move();
	delete a;
}
void main() 
{
	/*Animal a;
	a.move();*/
	sample();
	system("pause");
}