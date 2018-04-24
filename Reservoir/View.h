#pragma once
#include <vector>
#include "Reservoir.h"
class View
{
	std::vector<Reservoir> reservoirs;
public:
	View();
	void addReservoir(Reservoir);
	void removeReservoir(int id);
	~View();
};

