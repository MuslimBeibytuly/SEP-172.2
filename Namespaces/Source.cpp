#include <iostream>
#include <cmath>
namespace my
{
	using std::cout;
	using std::endl;
	namespace x 
	{
		int pow(int x, int y)
		{
			int res = 1;
			for (int i = 0; i < y; ++i)
			{
				res *= x;
			}
			return res;
		}
	}
}
using my::x::pow;
using std::cout;
void main()
{
	cout << pow(10, 10);
	system("pause");
}