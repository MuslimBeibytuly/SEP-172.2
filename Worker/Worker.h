#pragma once
#include <iostream>
class Worker
{
	int salary;
	int experience;
public:
	Worker();
	~Worker();
	friend void showWorker(Worker w);
	friend bool operator ==(const Worker & w1, const Worker & w2);
};

void showWorker(Worker w) {
}