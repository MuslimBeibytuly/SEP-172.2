#include "GroupOfPupils.h"
#include <iostream>
void main()
{
	GroupOfPupils g;
	g.sortPupilsWithLambda();
	for (Pupil & pupil : g.pupils)
	{
		std::cout << pupil.height << std::endl;
	}
	auto p = g.minPupilWithFunctor();
	std::cout << p->height << std::endl;
	p = g.minPupilWithLambda();
	std::cout << p->height << std::endl;
	p = g.findPupilWithLambda(170);
	std::cout << p->weight << std::endl;
	auto cnt = g.countPupilWithLambda(170);
	std::cout << cnt << std::endl;
	std::cin.get();
}
