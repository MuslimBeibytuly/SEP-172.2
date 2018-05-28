#include "Account.h"

int Account::cnt = 0;

Account::Account()
{
	++cnt;
	id = cnt;
}


Account::Account(std::string username, std::string password)
{
	this->username = username;
	this->password = password;
}

Account::~Account()
{
}
