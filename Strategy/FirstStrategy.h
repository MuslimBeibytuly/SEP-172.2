#pragma once
#include "Strategy.h"
#include <iostream>
class FirstStrategy
	: public Strategy
{
public:
	void use() override final;
	FirstStrategy();
	~FirstStrategy();
};

