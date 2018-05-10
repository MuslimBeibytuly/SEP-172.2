#include <iostream>
#include <vector>
#include <array>
#include <memory>
#include "DynamicArray.h"
//template <class ... T>
//bool isInRadius(T ... & points)
//{
//	int r = 5;
//	for (
//		auto && point : std::initializer_list<Example>({ points... })
//		)
//	{
//		if (
//			point.x * point.x +
//			point.y * point.y <= r * r
//			)
//		{
//			std::cout <<
//				point.x << ' ' << point.y << std::endl;
//			return true;
//		}
//	}
//	return false;
//}
void sample()
{
	//std::array<std::array<int, 5>, 5> a;
	/*std::cout << isInRadius(
		Example{ 7, 7 }, Example{ 9, 9 },
		Example{ 1, 2 }, Example{ 2, 3 }
	);
	std::vector<int> x;
	print(1, '2', "vfndk", 4, 2.4, 100L);*/
}
//template <class T1, class ... T2>
//void print(T1 t1, T2 ... t2)
//{
//	std::cout << t1 << std::endl;
//	print(t2...);
//}
//void print() {}

void main()
{
	DynamicArray<int> a(std::initializer_list<int>{1, 2, 3, 4});
	a.push_back(5);
	a.push_back(6);
	std::cout << a.count();
	system("pause");
}
