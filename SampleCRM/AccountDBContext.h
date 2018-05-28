#pragma once
#include "Account.h"
#include <vector>
class AccountDBContext
{
private:
	std::vector<Account> accountDb;
public:
	void addAccount(std::string, std::string);
	void editAccount(std::string);
	void deleteAccount();
	void displayAllAccounts();
	AccountDBContext();
	~AccountDBContext();
};

