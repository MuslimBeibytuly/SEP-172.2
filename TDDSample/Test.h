#pragma once
#include <vector>
class Test
{
public:
	std::vector<void(*)(void)> tests;
	void test_everything();
	Test();
	~Test();
};

