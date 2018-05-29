#pragma once
#include "Observable.h"
#include <vector>
class ConcreteObservable
	: public Observable
{
	std::vector<Observer *> observers;
public:
	size_t count() const override;
	void addObserver(Observer *) override;
	void removeObserver(Observer *) override;
	void notifyObservers() const override;
	ConcreteObservable();
	~ConcreteObservable();
};

