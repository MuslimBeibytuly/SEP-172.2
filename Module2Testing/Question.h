#pragma once
#include <string>
#include <vector>
class Question
{
private:
	std::string text;
	std::vector<std::string> answers;
	int right;
public:
	Question(std::string, std::vector<std::string>, int);
	std::string getText();
	std::vector<std::string> getAnswers();
	int getRight();
	~Question();
};

