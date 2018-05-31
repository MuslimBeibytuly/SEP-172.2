#include "LetterComponent.h"



void LetterComponent::operate()
{
	std::cout << c;
}

void LetterComponent::addIComponent(const sptr &)
{
	throw std::runtime_error("Add is not implemented for this class");
}

LetterComponent::LetterComponent(const char & c) : c(c) {}


LetterComponent::~LetterComponent()
{
}
