#pragma once
#include <exception>
class TestedStackOverflowException :
	public std::exception
{
public:
	const char * what() const override final;
	TestedStackOverflowException();
	~TestedStackOverflowException();
};

