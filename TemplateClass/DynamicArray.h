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
	T & operator [](const int & position)
	{
		return data[position];
	}
	T * begin() {
		return & data[0];
	}
	T * end() {
		return & data[size - 1];
	}
	void operator +=(DynamicArray & anotherDynamicArray)
	{
		/*data = (T*)realloc(
			data, 
			(size + anotherDynamicArray.count())* sizeof(T)
		);

		for (
			int j = 0, int i = size; 
			i < size + anotherDynamicArray.count();
			++i, ++j
			)
		{
			data[i] = anotherDynamicArray[j];
			size = size + anotherDynamicArray.count();
		}*/
		for (int i = 0; i < anotherDynamicArray.count(); ++i) 
		{
			push_back(anotherDynamicArray[i]);
		}
	}
	void operator +=(const T & element)
	{
		push_back(element);
	}
	~DynamicArray()
	{
		clear();
	}
};
