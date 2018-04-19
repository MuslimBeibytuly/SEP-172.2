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

std::vector<MyStudent> ListOfStudents::searchStudentsByName(std::string name)
{
	std::vector<MyStudent> result;
	for (MyStudent s : students) {
		if (s.name == name) {
			result.push_back(s);
		}
	}
	return result;
}
