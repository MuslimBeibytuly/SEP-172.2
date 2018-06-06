#include "GroupOfPupils.h"
#include <iostream>
void main()
{
	GroupOfPupils g;
	/*g.sortPupilsWithLambda();
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
	auto bound = g.partitionByHeightWithLambda(175);
	std::cout << "before bound: " << std::endl;
	for (auto it = g.pupils.begin(); it != bound; ++it)
	{
		std::cout << it->height << std::endl;
	}
	std::cout << "after bound: " << std::endl;
	for (auto it = bound; it != g.pupils.end(); ++it)
	{
		std::cout << it->height << std::endl;
	}
	std::random_shuffle(g.pupils.begin(), g.pupils.end());
	for (Pupil & pupil : g.pupils)
	{
		std::cout << pupil.height << std::endl;
	}
	std::cout << g.isSorted() << std::endl;*/
	g.sortPupilsWithLambda();
	std::cout << g.isSorted() << std::endl;
	for (Pupil & pupil : g.pupils)
	{
		std::cout << pupil.height << ' ';
	}
	std::cout << std::endl;
	while(g.nextPermutation())
	{
		for (Pupil & pupil : g.pupils)
		{
			std::cout << pupil.height << ' ';
		}
		std::cout << std::endl;
	}
	std::cin.get();
}
