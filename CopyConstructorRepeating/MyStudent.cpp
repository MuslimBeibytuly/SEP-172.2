#include "MyStudent.h"


MyStudent::MyStudent(int grade, std::string name)
{
	this->grade = grade;
	this->name = name;
}

MyStudent::MyStudent(const MyStudent & last)
{
	this->grade = last.grade;
	this->name = last.name;
}

MyStudent::~MyStudent()
{
}
