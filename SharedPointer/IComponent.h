#pragma once
#include <memory>
class IComponent
{
public:
	typedef std::shared_ptr<IComponent> sptr;
	virtual void operate() = 0;
	virtual void addIComponent(const sptr &) = 0;
	IComponent();
	virtual ~IComponent();
};

