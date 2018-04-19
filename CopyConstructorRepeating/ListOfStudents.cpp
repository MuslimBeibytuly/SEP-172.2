#include "ListOfStudents.h"



ListOfStudents::ListOfStudents()
{
}


ListOfStudents::~ListOfStudents()
{
}

void ListOfStudents::addStudent(int grade, std::string name)
{
	students.push_back(MyStudent(grade, name));
}

void ListOfStudents::addDuplicateStudent()
{
	students.push_back(students.back());
}

void ListOfStudents::showStudents()
{
	for (MyStudent s : students) {
		std::cout << "grade: " << s.grade << ", name: " << s.name << std::endl;
	}
}
