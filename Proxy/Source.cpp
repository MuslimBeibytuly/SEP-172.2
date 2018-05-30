#include <iostream>
#include "ProxyCreator.h"
#include "Citizen.h"

int main()
{
	ProxyCreator proxy;
	Citizen c("Give me an appartment");
	
	proxy.createAkim();
	proxy.problemSolving(c.problem);

	system("pause");
	return 0;
}