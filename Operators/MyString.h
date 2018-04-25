#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
class MyString
{
public:
	char * symbols;
	int size;
	MyString(const char *, int);
	MyString();
	~MyString();
	char operator [](int i);
	char operator ()(int i);
	MyString operator +(MyString & other);
};

