#pragma once
#include <string>
#include <iostream>
class Passport
{
protected:
	int docId, timestamp;
	std::string name;
public:
	Passport();
	virtual ~Passport();
	virtual void print();
};

