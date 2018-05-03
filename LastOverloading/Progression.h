#pragma once
class Progression
{
	int a1, d;
public:
	void setA1(int);
	void setD(int);
	int operator ()(int);
	int operator [](int);
	friend bool compare(Progression &, Progression &);
	Progression();
	~Progression();
};
