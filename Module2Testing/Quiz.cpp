#include "Quiz.h"

Quiz::Quiz()
{
}
Quiz & Quiz::getInstance()
{
	static Quiz instance;
	return instance;
}

Quiz::~Quiz()
{
	delete user;
}

void Quiz::initQuestions()
{
}

void Quiz::writeResultToFile()
{
}
