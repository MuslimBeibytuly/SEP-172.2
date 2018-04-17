#include <iostream>
#include <string>
using namespace std;

class PositiveInteger
{
	int value;
public:
	PositiveInteger()
	{
	}
	PositiveInteger(int x) 
	{
		value = x;
	}
	PositiveInteger(char x) 
	{
		value = (int)(x - 48);
	}
	~PositiveInteger()
	{
	}
	int getValue() 
	{
		return value;
	}
	void setValue(int _value) 
	{
		if (_value >= 0) 
		{
			value = _value;
		}
	}
};

struct B {
private:
	int x;
};

class Point {
public:
	int x, y, z;
	Point() 
	{
	}
	Point(int _x) {
		x = _x;
	}
	Point(int _x, int _y) : Point(_x)
	{
		y = _y;
	}
	Point(int _x, int _y, int _z) : Point(_x, _y)
	{
		z = _z;
	}
	~Point() 
	{

	}
};

void sample() 
{
	Point a;
	Point b(1);
	Point c(1, 2);
	Point d(1, 2, 3);
}

int main() 
{
	sample();
	system("pause");
	return 0;
}