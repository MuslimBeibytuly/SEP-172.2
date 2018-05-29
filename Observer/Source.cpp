#include "ConcreteObservable.h"
#include "ConcreteObserver.h"

void main() 
{
	Observable * publisher = new ConcreteObservable();
	Observer * subscriber1 = new ConcreteObserver();
	Observer * subscriber2 = new ConcreteObserver();
	publisher->addObserver(subscriber1);
	publisher->notifyObservers();

	publisher->addObserver(subscriber2);
	publisher->notifyObservers();
	system("pause");
	delete publisher;
	delete subscriber1;
	delete subscriber2;
}