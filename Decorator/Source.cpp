#include "AdditionalConcreteElement.h"
#include <memory>
#include <iostream>
void main() 
{
	std::shared_ptr<IElement> a(new AdditionalConcreteElement());
	std::cout << a->getState() << std::endl;
	system("pause");
}