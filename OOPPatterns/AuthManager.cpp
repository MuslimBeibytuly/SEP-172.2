#include "AuthManager.h"

void AuthManager::sign_up(Client &)
{
}

void AuthManager::sign_in(Client & client) const
{
	client.state = Client::Authenticated;
}

void AuthManager::sign_out(Client & client) const
{
	client.state = Client::Anonymous;
}

AuthManager & AuthManager::getInstance()
{
	static AuthManager instance;
	return instance;
}

AuthManager::AuthManager()
{
}


AuthManager::~AuthManager()
{
}
