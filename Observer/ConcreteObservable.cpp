#include "ConcreteObservable.h"



size_t ConcreteObservable::count() const
{
	return observers.size();
}

void ConcreteObservable::addObserver(Observer * observer)
{
	observer->id = observers.size();
	observers.push_back(observer);
}

void ConcreteObservable::removeObserver(Observer * disconnected)
{
	for (auto observer : observers) 
	{
		if (observer->id == disconnected->id) 
		{
			observers.erase(observers.begin() + disconnected->id);
		}
	}
}

void ConcreteObservable::notifyObservers() const
{
	for (auto observer : observers) 
	{
		observer->handleEvent();
	}
}

ConcreteObservable::ConcreteObservable()
{
}


ConcreteObservable::~ConcreteObservable()
{
}
