#pragma once
#include <vector>
#include <algorithm>
#include "Worker.h"

class Company
{
public:
	std::vector<Worker> workers;
	Company();
	~Company();
	void sortBySalary() 
	{
		std::sort(workers.begin(), workers.end());
	}
};

