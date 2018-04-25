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
	void operator =(int value) {
		std::cout << "=" << std::endl;
		this->value = value;
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
	~Integer() {
		std::cout << "~Integer()" << std::endl;
	}
	/*void operator +(A & a) {

	}*/
};
void sample() {
	Integer a, b = 5;
	a = 1;
	bool res = a <= b;
	std::cout << res << std::endl;
}
int main() {
	sample();
	system("pause");
	return 0;
}