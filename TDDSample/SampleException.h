#pragma once
#include <exception>
class SampleException
	: std::exception
{
public:
	const char * SampleException::what() const override final;
	SampleException();
	~SampleException();
};

