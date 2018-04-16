#include <string>
#include <iostream>

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

int main() 
{
	Circle c;
	c.setRadius(1);
	cout << c.getArea();
	system("pause");
	return 0;
}
