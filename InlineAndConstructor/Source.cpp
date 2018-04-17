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
	static int cnt;
	int x, y, z;
	
	Point()
	{
		++cnt;
	}
	Point(int _x) {
		x = _x;
		++cnt;
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
int Point::cnt = 0;

class Singleton {
public:
	int x;
	static Singleton & getInstance() {
		static Singleton instance;
		return instance;
	}
private:
	Singleton() {}
};

void sample()
{
}

int main()
{
	//sample();
	Point p1, p2(1), p3(4, 5);
	cout << Point::cnt;
	system("pause");
	return 0;
}
