#pragma once
#include <vector>
#include "Question.h"
#include "User.h"
class Quiz
{
private:
	Quiz();
public:
	std::vector<Question> questions;
	User *user;
	static Quiz & getInstance();
	~Quiz();
	void initQuestions();
	void writeResultToFile();
};

