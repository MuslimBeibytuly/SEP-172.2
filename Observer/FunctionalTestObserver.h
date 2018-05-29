#pragma once
#include <vector>
#include "FunctionalTestObserverCase.h"
class FunctionalTestObserver
{
public:
	std::vector<FunctionalTestObserverCase *> tests;
	void global_testing();
	FunctionalTestObserver();
	~FunctionalTestObserver();
};

