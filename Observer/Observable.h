#pragma once
#include "Observer.h"
class Observable
{
public:
	virtual void addObserver(Observer *) = 0;
	virtual void removeObserver(Observer *) = 0;
	virtual void notifyObservers() const = 0;
	Observable();
	virtual ~Observable();
};
