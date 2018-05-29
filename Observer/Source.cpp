#include "FunctionalTestObserver.h"
#include "FunctionTestObserverAddObserverCase.h"
void main() 
{
	FunctionalTestObserver testing;
	testing.tests.push_back(new FunctionTestObserverAddObserverCase());
	testing.global_testing();
	system("pause");
}
