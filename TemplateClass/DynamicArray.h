#pragma once
#include <initializer_list>
#include <cstdlib>
template <class T>
class DynamicArray
{
public:
	T * data;
	size_t size;
	DynamicArray()
	{
		data = nullptr;
		size = 0;
	}
	DynamicArray(std::initializer_list<T> & elements)
	{
		for (auto & element : elements) {
			this->push_back(element);
		}
	}
	void push_back(const T & element)
	{
		if (nullptr == data)
		{
			data = new T[++size];
			data[0] = element;
		}
		else
		{
			data = (T*)realloc(data, ++size * sizeof(T));
			data[size - 1] = element;
		}
	}
	void pop_back()
	{
		if (nullptr != data)
		{
			data = (T*)realloc(data, --size * sizeof(T));
		}
	}
	size_t count() const
	{
		return size;
	}
	void clear()
	{
		delete[] data;
	}
	~DynamicArray()
	{
		clear();
	}
};

