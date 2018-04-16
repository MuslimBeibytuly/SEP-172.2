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
public:
	double radius;

	double getArea() 
	{
		return 3.14 * radius * radius;
	}
};

int main() 
{
	Circle c;
	c.radius = 5;
	cout << c.getArea();
	system("pause");
	return 0;
}
