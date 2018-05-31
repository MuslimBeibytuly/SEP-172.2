#include "AdditionalConcreteElement.h"

std::string AdditionalConcreteElement::getState()
{
	return element->getState() + " world";
}

AdditionalConcreteElement::AdditionalConcreteElement()
{
	element = new ConcreteElement();
}

AdditionalConcreteElement::~AdditionalConcreteElement()
{
	delete element;
}
