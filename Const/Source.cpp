#include <iostream>
class A 
{
private:
	int x;
public:
	explicit A(int x) 
	{
		this->x = x;
	}
	A(const A & a) 
	{
	}
	int getX() const 
	{
		return x;
	}
	void setX(int x) 
	{
		this->x = x;
	}
	void say(int name) const 
	{
		std::cout << name;
	}
};

int main() 
{
	A a(5);
	int x = 5;
	double c = 12.8;
	x = c;
	std::cout << x;
	return 0; 
}