#pragma once
#include <exception>
class MyCustomException : std::exception
{
public:
	char const* what() const
	{
		return "Please contact administrator";
	}
	MyCustomException();
	~MyCustomException();
};

