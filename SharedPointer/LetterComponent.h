#pragma once
#include "IComponent.h"
#include <iostream>
class LetterComponent
	: public IComponent
{
public:
	char c;
	void operate();
	void addIComponent(const sptr &);
	LetterComponent(const char &);
	~LetterComponent();
};

