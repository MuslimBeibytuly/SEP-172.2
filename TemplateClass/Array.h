#pragma once
template <class T>
class Array
{
public:
	T * data;
	Array(int size) 
	{
		data = new T[size];
	}
	~Array() 
	{
		delete[] data;
	}
};