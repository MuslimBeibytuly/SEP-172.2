#pragma once
#include "ForeignPassport.h"
class PassportFactory
{
public:
	enum PassportType { Default, Foreign };
	PassportType passportType;
	PassportFactory();
	~PassportFactory();
	static Passport * createPassport(const PassportType &);
};

