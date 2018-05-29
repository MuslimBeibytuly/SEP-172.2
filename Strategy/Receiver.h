#pragma once
#include <exception>
#include <string>
#include <cstring>
#include "ContextManager.h"
#include "FirstStrategy.h"
#include "SecondStrategy.h"
class Receiver :
	public ContextManager
{
public:
	void useStrategy() override final;
	void setStrategy(Strategy *) override final;
	void getType(std::string);
	Receiver();
	~Receiver();
};

