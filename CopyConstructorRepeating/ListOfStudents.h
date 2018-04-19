#pragma once
#include "MyStudent.h"
#include <vector>
#include <iostream>
class ListOfStudents
{
	std::vector<MyStudent> students;
public:
	ListOfStudents();
	~ListOfStudents();
	void addStudent(int, std::string);
	void addDuplicateStudent();
	void showStudents();
};

