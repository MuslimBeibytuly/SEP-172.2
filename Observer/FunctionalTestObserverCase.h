#pragma once
#include <cassert>
class FunctionalTestObserverCase
{
	virtual void setUp() = 0;
	virtual void test() = 0;
	virtual void clean() = 0;
public:
	FunctionalTestObserverCase();
	virtual ~FunctionalTestObserverCase();
};

