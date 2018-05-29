#include "ConcreteObserver.h"



void ConcreteObserver::handleEvent()
{
	std::cout 
		<< "I'm concrete observer and I'm handling event" 
		<< std::endl;
}

ConcreteObserver::ConcreteObserver()
{
}


ConcreteObserver::~ConcreteObserver()
{
}
