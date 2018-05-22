#include "PassportFactory.h"
#include <vector>
void main() 
{
	std::vector<Passport *> passports;
	passports.push_back(
		PassportFactory::createPassport(PassportFactory::Default)
	);
	passports.push_back(
		PassportFactory::createPassport(PassportFactory::Foreign)
	);
	for (Passport * passport : passports) 
	{
		passport->print();
	}
	system("pause");
}
