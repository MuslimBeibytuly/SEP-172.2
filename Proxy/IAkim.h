#pragma once
#include <string>
class IAkim
{
public:
	virtual void problemSolving(std::string) = 0;
	virtual void makingReport() = 0;
	IAkim();
	virtual ~IAkim();
};

