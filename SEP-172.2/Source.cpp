#include <string>
#include <iostream>
#include <fstream>
#include "Student.h"

using namespace std;

class Human
{
public:
	//state
	int age;
	string name;

	//operations
	void hello() {
		cout << "Hello, I am: " << name << endl;
	}
};

class Circle
{
private:
	double radius;
public:
	double getArea()
	{
		return 3.14 * radius * radius;
	}
	void setRadius(double _radius)
	{
		radius = _radius;
	}
	double getRadius() {
		return radius;
	}
};

class Point 
{
private:
	int x, y, z;
public:
	int getX() {
		return x;
	}
	void setX(int _x) {
		x = _x;
	}
	int getY() {
		return y;
	}
	void setY(int _y) {
		y = _y;
	}
	int getZ() {
		return z;
	}
	void setZ(int _z) {
		z = _z;
	}
	void readPointFromFile() 
	{
		ifstream in("point.txt");
		in >> x >> y >> z;
		in.close();
	}
	void writePointToFile() 
	{
		ofstream out("point1.txt");
		out << x << ' ' << y << ' ' << z;
	}
};

int main()
{
	Student s;
	system("pause");
	return 0;
}
