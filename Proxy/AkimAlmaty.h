#pragma once
#include <iostream>
#include "IAkim.h"
#include <string> 

class AkimAlmaty : public IAkim
{
public:
	void problemSolving(std::string) override final;
	void makingReport() override final;
	AkimAlmaty();
	~AkimAlmaty();
};

