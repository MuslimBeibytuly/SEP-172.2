#pragma once
#include "IComponent.h"
#include <vector>
class CompositeComponent :
	public IComponent
{
public:
	std::vector<sptr> components;
	void operate();
	void addIComponent(const sptr &);
	CompositeComponent();
	CompositeComponent(const sptr &);
	~CompositeComponent();
};

