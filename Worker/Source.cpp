#include <iostream>
#include "Company.h"
int main() {
	Company c;
	c.sortBySalary();
	for (auto worker : c.workers) 
	{
		std::cout << worker.salary << std::endl;
	}
	system("pause");
	return 0;
}