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
	Point(const Point & point)
	{
		this->x = point.x;
		this->y = point.y;
		this->z = point.z;
		cout << "Point is created" << endl;
	}
	int getX() {
		return x;
	}
	void setX(int x) {
		this->x = x;
	}
	Point()
	{
		cout << "Point is created" << endl;
	}
	Point(int x) {
		this->x = x;
		cout << "Point is created" << endl;
	}
	Point(int x, int y) : Point(x)
	{
		this->y = y;
	}
	Point(int x, int y, int z) : Point(x, y)
	{
		this->z = z;
	}
	~Point()
	{
		cout << "Point is destroyed" << endl;
	}
	static void say() {
		cout << "hello";
	}
};

class Singleton
{
private:
	Singleton() {}
public:
	int x;
	static Singleton & getInstance()
	{
		static Singleton instance;
		return instance;
	}
	~Singleton() {}
};

void sample() {
	Point p1;
	Point p2(p1);
}

int main()
{
	sample();
	system("pause");
	return 0;
}
