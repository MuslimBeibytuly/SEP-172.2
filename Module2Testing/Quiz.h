#pragma once
#include <vector>
#include "Question.h"
#include "User.h"
class Quiz
{
public:
	std::vector<Question> questions;
	User user;
	Quiz();
	~Quiz();
};

