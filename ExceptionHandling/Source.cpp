#include <exception>
#include <iostream>
#include <string>
#include "MyCustomException.h"
int divInt(int i, int j)
{
	if (j == 0)
	{
		throw std::exception("division by zero exception");
	}
	else
	{
		return i / j;
	}
}

int string_to_int(const std::string & s, int res = 0, int radix = 1)
{
	if (s.length() >= 15)
	{
		throw std::overflow_error("overflow");
	}
	if (s.length() >= 10)
	{
		throw MyCustomException();
	}
	if (s.length() == 0)
	{
		return res /= 10;
	}
	return string_to_int(
		s.substr(0, s.length() - 1),
		res += ((int)(s[s.length() - 1] - 48)) * radix,
		radix *= 10
	);
}

void main()
{
	/*int i = 0, j = 5;
	try
	{
		int x = divInt(j, i);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}*/
	try 
	{
		std::cout << string_to_int("126345683") << std::endl;
	}
	catch (const MyCustomException & e) 
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::overflow_error & e) 
	{
		std::cout << e.what() << std::endl;
	}
	system("pause");	
}
