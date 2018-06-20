#include <iostream>
#include <vector>
#include <algorithm>

template <typename Collection, typename Operation>
void foreach(const Collection c, const Operation o) {
	std::for_each(c.begin(), c.end(), o);
}

void main() {
	const auto print = [](const int i)
	{
		std::cout << i << std::endl;
	};
	const std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	foreach(v, print);
	system("pause");
}