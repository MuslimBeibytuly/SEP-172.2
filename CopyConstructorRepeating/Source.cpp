#include <iostream>
#include "ListOfStudents.h"
using namespace std;

int main() {
	ListOfStudents myList;
	myList.addStudent(1, "LOL");
	myList.addStudent(2, "LOL1");
	ListOfStudents yourList(myList);
	cout << yourList.students.size();

	system("pause");
	return 0;
}