#pragma once
template <typename type>
class Queue
{
	type * data;
	size_t size, head, tail;
public:
	Queue()
	{
		head = tail = size = 0;
		data = nullptr;
	}
	void enqueue(const type & value)
	{
		if (data == nullptr) 
		{
			++size;
			data = new type[size];
		} 
		else if (tail + 1 >= size)
		{
			size *= 2;
			data = (type*)realloc(data, size * sizeof(type));
			++tail;
		}
		data[tail] = value;
	}
	type & dequeue()
	{
		return data[head++];
	}
	~Queue()
	{

	}
};
