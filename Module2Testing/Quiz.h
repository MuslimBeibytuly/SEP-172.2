#pragma once
#include <vector>
#include <fstream>
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
	int score = 0;
	~Quiz();
	void initQuestions();
	void writeResultToFile();
};

