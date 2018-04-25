#include "Date.h"

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

int Date::operator-(Date & date)
{
	return (
		((this->year * 12 * 30) + (this->month * 30) + this->day)
		- ((date.year * 12 * 30) + (date.month * 30) + date.day)
		);

}

Date::Date()
{
}


Date::~Date()
{
}
