#pragma once
#include <string>
class User
{
	std::string username;
public:
	User(std::string);
	~User();
	std::string getUsername();
	void setUsername(std::string);
};

