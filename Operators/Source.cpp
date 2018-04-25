#include <iostream>
#include "MyString.h"
#include "Date.h"
#include <string>
class Integer {
public:
	int value;
	Integer(int value) : value(value) 
	{
		std::cout << "Integer(value)" << std::endl;
	}
	Integer() 
	{
		std::cout << "Integer()" << std::endl;
	}
	void operator =(const Integer & other) 
	{
		std::cout << "=" << std::endl;
		this->value = other.value;
	}
	void operator +=(const int & value) 
	{
		std::cout << "+=" << std::endl;
		this->value += value;
	}
	Integer & operator ++() 
	{
		++this->value;
		return *this;
	}
	Integer & operator ++(int) 
	{
		Integer prev = *this;
		++this->value;
		return prev;
	}
	bool operator <(const Integer & a) const 
	{
		return this->value < a.value;
	}
	bool operator <=(const Integer & a) const 
	{
		return this->value <= a.value;
	}
	bool operator ==(const Integer & a) 
	{
		return this->value == a.value;
	}
	~Integer() 
	{
		std::cout << "~Integer()" << std::endl;
	}
	/*void operator +(A & a) {

	}*/
};

void sample() {
	MyString s1("asd", 3);
	MyString s2("zxc", 3);
	MyString s3 = s1 + s2;
	for (int i = 0; i < s3.size; ++i) {
		std::cout << s3.symbols[i];
	}
	std::cout << std::endl;
}

void sampleForDates() 
{
	Date d1(25, 6, 2018), d2(12, 8, 2012);
	std::cout << d1 - d2;
}


int main() 
{
	sampleForDates();
	system("pause");
	return 0;
}