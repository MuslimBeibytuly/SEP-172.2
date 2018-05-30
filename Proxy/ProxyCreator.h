#pragma once
#include "AkimAlmaty.h"

class ProxyCreator : public IAkim
{
	IAkim * akim;
public:
	void problemSolving(std::string) override final;
	void makingReport() override final;
	void createAkim();
	ProxyCreator();
	~ProxyCreator();
};

