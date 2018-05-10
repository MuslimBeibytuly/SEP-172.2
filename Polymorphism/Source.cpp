#include <iostream>
#include <vector>

template <typename T>
T getAverage(std::vector<T> elements)
{
	T sum = elements[0];
	for (int i = 1; i < elements.size(); ++i)
	{
		sum += elements[i];
	}
	return sum / elements.size();
}

char getAverage(std::vector<char> elements) 
{
	int sum = (int)elements[0];
	for (int i = 1; i < elements.size(); ++i)
	{
		sum += (int)elements[i];
	}
	return (char)(sum / elements.size());
}

void main()
{
	std::vector<int> a{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::vector<double> b{ 1.0, 2.4, 10.6 };
	std::vector<char> c{ 'a', 'b', 'c', 'd', 'e' };
	std::cout << getAverage(a) << std::endl;
	std::cout << getAverage(b) << std::endl;
	std::cout << getAverage(c) << std::endl;
	std::cin.get();
}