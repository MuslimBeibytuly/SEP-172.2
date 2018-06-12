//#include "Configuration.h"
#include <fstream>
#include <iostream>
#include <set>
#include <vector>

void serialization() 
{
	/*Configuration c("abc", 1);
	std::ofstream ofs("config.txt");
	boost::archive::text_oarchive oa(ofs);
	oa << c;*/
}
void main() {
	std::vector<int> v;
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(6);
	v.push_back(9);
	std::ofstream ofs("v.txt");
	for (int i : v) 
	{
		ofs << i << ' ';
	}
	ofs << std::endl;
	std::vector<int> res;
	std::ifstream ifs("v.txt");
	int temp;
	while (ifs >> temp)
	{
		res.push_back(temp);
	}

	for (int & i : res)
	{
		std::cout << i << ' ';
	}
	system("pause");
}