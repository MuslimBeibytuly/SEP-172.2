#pragma once
#include "Passport.h"
class ForeignPassport :
	public Passport
{
	int foreignDocId;
public:
	ForeignPassport();
	~ForeignPassport();
	void print() override;
};
