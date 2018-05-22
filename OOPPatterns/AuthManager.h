#pragma once
#include "Client.h"
class AuthManager
{
	AuthManager();
public:
	void sign_up(Client & );
	void sign_in(Client & ) const;
	void sign_out(Client &) const;
	static AuthManager & getInstance();
	~AuthManager();
};

