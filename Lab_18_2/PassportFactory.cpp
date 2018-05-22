#include "PassportFactory.h"



PassportFactory::PassportFactory()
{
}


PassportFactory::~PassportFactory()
{
}

Passport * PassportFactory::createPassport(const PassportType & passportType)
{
	Passport * passport = nullptr;
	switch (passportType) 
	{
	case Default:
		passport = new Passport();
		break;
	case Foreign:
		passport = new ForeignPassport();
		break;
	}
	return passport;
}
