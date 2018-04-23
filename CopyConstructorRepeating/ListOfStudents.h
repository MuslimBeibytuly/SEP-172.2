#pragma once
#include "MyStudent.h"
#include <vector>
#include <iostream>
class ListOfStudents
{
public:
	std::vector<MyStudent> students;
	ListOfStudents();
	ListOfStudents(const ListOfStudents &);
	~ListOfStudents();
	void addStudent(int, std::string);
	void addDuplicateStudent();
	void showStudents();
	std::vector<MyStudent> searchStudentsByName(std::string);
};
