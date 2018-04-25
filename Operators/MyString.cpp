#include "MyString.h"


MyString::MyString(const char *word, int size)
{
	this->size = size;
	symbols = new char[size];
	for (int i = 0; i < size; ++i)
	{
		symbols[i] = word[i];
	}
}

MyString::MyString()
{
}


MyString::~MyString()
{
}

char MyString::operator[](int i)
{
	if (i < size) 
	{
		return symbols[i];
	}
}

char MyString::operator()(int i)
{
	if (i < size)
	{
		return symbols[i];
	}
}

MyString MyString::operator +(MyString & other)
{
	MyString res;
	res.size = this->size + other.size;
	res.symbols = new char[res.size];
	int i = 0;
	for (; i < this->size; ++i) 
	{
		res.symbols[i] = this->symbols[i];
	}
	for (i = this->size; i < res.size; ++i)
	{
		res.symbols[i] = other.symbols[i - this->size];
	}
	return res;
}
