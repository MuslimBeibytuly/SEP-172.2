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

std::string Question::getText()
{
	return text;
}

std::vector<std::string> Question::getAnswers()
{
	return answers;
}

int Question::getRight()
{
	return right;
}


Question::~Question()
{
}
