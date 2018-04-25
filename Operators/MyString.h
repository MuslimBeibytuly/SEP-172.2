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
	MyString operator +(MyString other);
};

