#pragma once
#include <string>
class MyStudent
{
public:
	int grade;
	std::string name;
	MyStudent(int, std::string);
	MyStudent(const MyStudent &);
	~MyStudent();
};

