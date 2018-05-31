#pragma once
#include "ConcreteElement.h"
#include <memory>
class AdditionalConcreteElement
	: public IElement
{
	IElement * element;
public:
	std::string getState() override final;
	AdditionalConcreteElement();
	~AdditionalConcreteElement();
};

