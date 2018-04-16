#include <string>
#include <iostream>
#include <fstream>
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

class Student
{
private:
	string fullName, dateOfBirth, phone, city, country, university, cityOfUniversity, countryOfUniversity;
	int group;
public:
	void input()
	{
		cout << "fullName: ";
		cin >> fullName;
		//make this a lot of time
	}
	void show()
	{
		cout << "fullName: ";
		cout << fullName << endl;
		//make this a lot of time
	}
	string getFullName() 
	{
		return fullName;
	}
	void setFullName(string _fullName)
	{
		if (!_fullName.empty()) 
		{
			fullName = _fullName;
		}
	}
	//make this a lot of time
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
	}
	void writePointToFile() {
		ofstream out("point1.txt");
		out << x << ' ' << y << ' ' << z;
	}
};

int main()
{
	Point p;
	p.readPointFromFile();
	cout << p.getX() << ' ' << p.getY() << ' ' << p.getZ() << endl;
	p.setX(p.getX() + p.getY());
	p.writePointToFile();
	system("pause");
	return 0;
}
