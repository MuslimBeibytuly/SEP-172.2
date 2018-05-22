#pragma once
class Int
{
protected:
	int value;
public:
	Int();
	virtual ~Int();
	int getValue() const;
	virtual void setValue(const int &);
};

