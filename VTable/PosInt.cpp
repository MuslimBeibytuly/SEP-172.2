#include "PosInt.h"



PosInt::PosInt()
{
}


PosInt::~PosInt()
{
}

void PosInt::setValue(const int & value)
{
	if (0 <= value) {
		this->value = value;
	}
}
