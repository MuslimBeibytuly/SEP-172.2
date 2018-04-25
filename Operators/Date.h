#pragma once
class Date
{
	int day, month, year;
public:
	Date(int, int, int);
	int operator -(Date &);
	Date();
	~Date();
};

