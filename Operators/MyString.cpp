#include "MyString.h"

MyString::MyString()
{
}


MyString::~MyString()
{
}

char MyString::operator[](int i)
{
	if (i < symbols.size())
	{
		return symbols[i];
	}
}

char MyString::operator()(int i)
{
	if (i < symbols.size())
	{
		return symbols[i];
	}
}

MyString MyString::operator *(MyString & m)
{
	MyString res;
	for (int i = 0; i < symbols.size(); ++i)
	{
		for (int j = 0; j < m.symbols.size(); ++j)
		{
			if (symbols[i] == m[j]) 
			{
				res.symbols += m[j];
			}
		}
	}
	return res;
}

//MyString MyString::operator +(MyString & other)
//{
//	MyString res;
//	res.size = this->size + other.size;
//	res.symbols = new char[res.size];
//	int i = 0;
//	for (; i < this->size; ++i) 
//	{
//		res.symbols[i] = this->symbols[i];
//	}
//	for (i = this->size; i < res.size; ++i)
//	{
//		res.symbols[i] = other.symbols[i - this->size];
//	}
//	return res;
//}
