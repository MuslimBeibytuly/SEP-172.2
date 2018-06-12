#include "stdafx.h"
#include "Math.h"


double Math::pow(double a, int b)
{
	double res = 1;
	for (size_t i = 0; i < b; i++)
	{
		res * a;
	}
	return res;
}

Math::Math()
{
}

Math::Math(double operand) : operand(operand)
{
}


Math::~Math()
{
}
