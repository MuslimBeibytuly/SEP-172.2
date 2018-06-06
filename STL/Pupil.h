#pragma once
#include <string>
class Pupil
{
public:
	std::string name;
	int height, weight, age;
	Pupil(int height, int weight, int age, std::string name);
	Pupil();
	~Pupil();
};

