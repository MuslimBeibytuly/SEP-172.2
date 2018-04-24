#pragma once

//struct A {
//	int x;4
//	char y;1
//	double z;8
//};
//
//union B {
//	int x; 4
//	char y; 1
//	double z; 8
//};
#include <iostream>
class Worker
{
public:
	int salary;
	int experience;
	Worker(int);
	Worker();
	~Worker();
	bool operator <(const Worker & worker) const {
		return this->salary < worker.salary;
	}
	void operator ++() {
		this->salary++;
	}
};

