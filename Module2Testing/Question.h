#pragma once
#include <string>
#include <vector>
class Question
{
	std::string text;
	std::vector<std::string> answers;
	int right;
public:
	Question(std::string, std::vector<std::string>, int);
	~Question();
};

