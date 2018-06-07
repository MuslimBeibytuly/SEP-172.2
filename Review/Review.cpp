// Review.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int calculate(
	const int & a,
	const int & b,
	int(*operation)(const int &, const int &)
)
{
	return operation(a, b);
}

int main()
{
	int a, b;
	char o;
	std::unordered_map<char, int(*)(const int &, const int &)> operations;
	operations.insert(std::make_pair('+',
		[](const int & a, const int & b) { return a + b; }));
	operations.insert(std::make_pair('-',
		[](const int & a, const int & b) { return a - b; }));
	std::string s;
	std::getline(std::cin, s);
	char * symbols = new char[s.length()];
	for (size_t i = 0; i < s.length(); i++)
	{
		symbols[i] = s[i];
	}
	const char * c = strtok(symbols, " ");
	std::queue<int> operands;
	std::queue<char> operators;
	while (c != NULL) 
	{
		if (isdigit(*c))
		{
			operands.push((int)(*c - 48));
		}
		else 
		{
			operators.push(*c);
		}
		c = strtok(NULL, " ");
	}
	a = operands.front();
	operands.pop();
	while (!operands.empty() && !operators.empty()) 
	{
		b = operands.front();
		o = operators.front();
		a = calculate(a, b, operations[o]);
		operands.pop();
		operators.pop();
	}
	std::cout << a << std::endl;
	/*std::cin >> a >> o;
	while (o != '=')
	{
		std::cin >> b;
		a = calculate(a, b, operations[o]);
		std::cin >> o;
	}
	std::cout << a << std::endl;*/
	delete[] symbols;
	return 0;
}
