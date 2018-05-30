#include "ProxyCreator.h"



void ProxyCreator::problemSolving(std::string problem)
{
	akim->problemSolving(problem);
	makingReport();
}

void ProxyCreator::makingReport()
{
	std::cout << "I make reports" << std::endl;
}

void ProxyCreator::createAkim()
{
	if (akim == nullptr)
	{
		akim = new AkimAlmaty();
	}
}

ProxyCreator::ProxyCreator()
{
	akim = nullptr;
}


ProxyCreator::~ProxyCreator()
{
}
