#pragma once
#include "IElement.h"
class ConcreteElement
	: public IElement
{
public:
	std::string getState() override final;
	ConcreteElement();
	~ConcreteElement();
};

