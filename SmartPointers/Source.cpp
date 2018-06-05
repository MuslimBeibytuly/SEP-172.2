#include <memory>
#include <iostream>

void main() 
{
	std::auto_ptr<int> x(new int(5));
	std::cout << x.get() << std::endl;
	std::auto_ptr<int> y = x;
	std::cout << y.get() << std::endl;
	std::shared_ptr<int> a(new int(5));
	std::cout << a.use_count() << std::endl;
	std::cout << a.get() << std::endl;
	std::cout << *a << std::endl;
	std::cout << *a << std::endl;
	std::unique_ptr<int> b(new int(5));
	system("pause");
}