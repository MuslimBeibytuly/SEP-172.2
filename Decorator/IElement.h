#pragma once
#include <string>
class IElement
{
public:
	virtual std::string getState() = 0;
	virtual ~IElement();
};

