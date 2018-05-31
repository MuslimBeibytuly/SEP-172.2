#include "CompositeComponent.h"



void CompositeComponent::operate()
{
	for (sptr & component : components) 
	{
		component->operate();
	}
}

void CompositeComponent::addIComponent(const sptr & component)
{
	components.push_back(component);
}

CompositeComponent::CompositeComponent()
{
}

CompositeComponent::CompositeComponent(const sptr & component)
{
	addIComponent(component);
}


CompositeComponent::~CompositeComponent()
{
}
