#pragma once
#include "Strategy.h"
class ContextManager
{
public:
	Strategy* operation;
	virtual void useStrategy() = 0;
	virtual void setStrategy(Strategy *) = 0;
	virtual ~ContextManager();
};

