#include <typeinfo>
#include <string>
#include <iostream>
#include <cassert>
#include <fstream>
class X 
{
	int i;
public:
	X(int i) :i(3) {}
	void setI(int i) const 
	{
		const_cast<X*>(this)->i = i;
	}
};

class A
{
	virtual void a() {}
};
class B : public A
{
public:
	void b() {
		std::cout << "b";
	}
};

void main()
{
	A * x = new A();
	try 
	{
		B * b = dynamic_cast<B *>(x);
		b->b();
		b = static_cast<B *>(x);
		b->b();
		int y = reinterpret_cast<int>(x);
		std::cout << y << std::endl;
	}
	catch (const std::bad_cast & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	const int a = 5;
	const int &p = a;
	const_cast<int &>(p) = 6;
	std::cout << "p: " << p << std::endl;
	std::cout << "a: " << a << std::endl;
	system("pause");
}
