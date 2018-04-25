#pragma once
#include <string>
class MyString
{
public:
	std::string symbols;
	MyString();
	~MyString();
	char operator [](int i);
	char operator ()(int i);
	MyString operator *(MyString &);
	//MyString operator +(MyString & other);
};

