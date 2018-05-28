#include "AccountDBContext.h"



void AccountDBContext::addAccount(
	std::string username, std::string password)
{
	accountDb.push_back(Account(username, password));
}

void AccountDBContext::editAccount(std::string username)
{
	for (auto & account : accountDb)
	{
		if (account.username == username)
		{
			account.username = username;
		}
	}
}

void AccountDBContext::deleteAccount(std::string username)
{
	int i = 0;
	for (auto account : accountDb)
	{
		if (account.username == username)
		{
			accountDb.erase(accountDb.begin() + i);
		}
		i++;
	}
}

void AccountDBContext::displayAllAccounts()
{
	for (auto account : accountDb)
	{
		std::cout << account.id << ' ' << account.username << std::endl;
	}
}

AccountDBContext::AccountDBContext()
{
}


AccountDBContext::~AccountDBContext()
{
}
