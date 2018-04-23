#include "User.h"



User::User(std::string username)
{
	this->username = username;
}

User::~User()
{
}

std::string User::getUsername() {
	return username;
}

void User::setUsername(std::string username) {
	this->username = username;
}