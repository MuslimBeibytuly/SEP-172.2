#pragma once
#include <iostream>
#include "Strategy.h"
class SecondStrategy :
	public Strategy
{
public:
	void use() override final;
	SecondStrategy();
	~SecondStrategy();
};

