#include "SampleException.h"

const char * SampleException::what() const
{
	return "SampleException";
}
SampleException::SampleException()
{
}


SampleException::~SampleException()
{
}
