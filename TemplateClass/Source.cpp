#include <iostream>
#include <vector>
#include <array>
#include <memory>
void sample()
{
	//std::array<std::array<int, 5>, 5> a;
}

template <class T1, class ... T2>
void print(T1 t1, T2 ... t2) 
{
	std::cout << t1 << std::endl;
	print(t2...);
}
void print(){}
void main()
{
	print(1, '2', "vfndk", 4, 2.4, 100L);
	system("pause");
}