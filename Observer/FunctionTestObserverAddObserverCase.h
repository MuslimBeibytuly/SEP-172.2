#pragma once
#include "FunctionalTestObserverCase.h"
#include "Observable.h"
#include "ConcreteObservable.h"
#include "ConcreteObserver.h"
class FunctionTestObserverAddObserverCase :
	public FunctionalTestObserverCase
{
public:
	Observable *publisher;
	Observer *subscriber1, *subscriber2;
	void setUp();
	void test();
	void clean();
	FunctionTestObserverAddObserverCase();
	~FunctionTestObserverAddObserverCase();
};

