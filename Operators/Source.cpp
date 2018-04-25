#include <iostream>
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
	void operator =(int value) 
	{
		std::cout << "=" << std::endl;
		this->value = value;
	}
	void operator +=(int value) 
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
	Integer a = 5;
	std::cout << a++.value << std::endl;
	std::cout << a.value << std::endl;
}
int main() {
	sample();
	system("pause");
	return 0;
}