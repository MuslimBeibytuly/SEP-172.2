#include <cassert>
#include "TestedStack.h"
#include "Test.h"
#include "SampleException.h"
void test() 
{
	TestedStack<int> ts;
	ts.push(1);
	ts.push(1);
	ts.push(1);
	ts.push(1);
	ts.push(1);
	try 
	{
		ts.push(1);
	}
	catch (const SampleException & e)
	{
		assert(e.what() == "SampleException");
	}
}

void main() 
{
	Test t;
	t.tests.push_back(test);
	t.test_everything();
}
