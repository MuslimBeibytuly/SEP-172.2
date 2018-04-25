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

MyString MyString::operator +(MyString other)
{
	this->size += other.size;
	strcat(this->symbols, other.symbols);
}
