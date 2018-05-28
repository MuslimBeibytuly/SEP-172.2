#include "Test.h"



void Test::test_everything()
{
	for (auto test : tests) 
	{
		test();
	}
}

Test::Test()
{
}


Test::~Test()
{
}
