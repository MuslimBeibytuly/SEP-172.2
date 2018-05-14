#pragma once
#include <string>
class MyString
{
public:
	std::string symbols;
	MyString();
	~MyString();
	MyString(std::string);
	char operator [](int i);
	char operator ()(int i);
	MyString operator *(MyString &);
	//MyString operator +(MyString & other);
};

