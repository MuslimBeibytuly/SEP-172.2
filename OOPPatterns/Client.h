#pragma once
#include <iostream>
#include <string>
class Client
{
public:
	enum State { Anonymous, Authenticated };
	State state;
	Client();
	~Client();
};

