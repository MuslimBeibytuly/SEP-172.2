#include "FunctionalTestObserver.h"



void FunctionalTestObserver::global_testing()
{
	for (auto current_test : tests) 
	{
		current_test->setUp();
		current_test->test();
		current_test->clean();
	}
}

FunctionalTestObserver::FunctionalTestObserver()
{
}


FunctionalTestObserver::~FunctionalTestObserver()
{
	for (auto current_test : tests) {
		delete current_test;
	}
}
