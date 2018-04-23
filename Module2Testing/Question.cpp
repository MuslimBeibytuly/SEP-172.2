#include "Question.h"



Question::Question(
	std::string text, 
	std::vector<std::string> answers, 
	int right)
{
	this->text = text;
	this->answers = answers;
	this->right = right;
}


Question::~Question()
{
}
