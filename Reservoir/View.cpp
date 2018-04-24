#include "View.h"



View::View()
{
}

void View::addReservoir(Reservoir r)
{
	reservoirs.push_back(r);
}


void View::removeReservoir(int id)
{
	for (int i = 0; i < reservoirs.size(); ++i)
	{
		if (reservoirs[i].getId() == id) {
			reservoirs.erase(reservoirs.begin() + i);
			break;
		}
	}
}


View::~View()
{
}
