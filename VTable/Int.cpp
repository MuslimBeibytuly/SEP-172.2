#include "Int.h"



Int::Int()
{
	value = 0;
}


Int::~Int()
{
}

int Int::getValue() const
{
	return value;
}

void Int::setValue(const int & value)
{
	this->value = value;
}
