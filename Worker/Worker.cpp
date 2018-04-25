#include "Worker.h"
Worker::Worker()
{
	
}

Worker::~Worker()
{
}

bool operator==(const Worker & w1, const Worker & w2)
{
	return w1.experience == w2.experience;
}
