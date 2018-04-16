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

int main()
{
	Student s;
	system("pause");
	return 0;
}
