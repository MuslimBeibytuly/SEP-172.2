#pragma once
#include <ostream>
class MyCircle
{
	int radius;
public:
	MyCircle(int);
	MyCircle();
	~MyCircle();
	bool operator ==(const MyCircle &) const;
	friend MyCircle & operator +=(MyCircle &, int value);
	friend std::ostream & operator <<(std::ostream &, const MyCircle &);
	void * operator new(size_t size);
};
