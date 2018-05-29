#pragma once
#include <cassert>
class FunctionalTestObserverCase
{
public:
	virtual void setUp() = 0;
	virtual void test() = 0;
	virtual void clean() = 0;
	FunctionalTestObserverCase();
	virtual ~FunctionalTestObserverCase();
};

