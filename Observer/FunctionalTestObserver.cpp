#include "FunctionalTestObserver.h"



void FunctionalTestObserver::global_testing()
{
	for (auto currrent_test : tests) {
		currrent_test->setUp();
		currrent_test->test();
		currrent_test->clean();
	}
}

FunctionalTestObserver::FunctionalTestObserver()
{
}


FunctionalTestObserver::~FunctionalTestObserver()
{
	for (auto currrent_test : tests) {
		delete currrent_test;
	}
}
