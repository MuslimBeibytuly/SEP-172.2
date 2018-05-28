#include "TestedStackOverflowException.h"

const char * TestedStackOverflowException::what() const
{
	return "TestedStackOverflowException";
}

TestedStackOverflowException::TestedStackOverflowException()
{
}


TestedStackOverflowException::~TestedStackOverflowException()
{
}
