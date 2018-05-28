#pragma once
#include <string>
//DAO
class Account
{

public:
	static int cnt;
	int id;
	std::string username, password;
	Account(std::string, std::string);
	~Account();
};

