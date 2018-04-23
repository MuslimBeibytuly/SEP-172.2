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
	std::ifstream in("questions.txt");
	std::string text;
	std::vector<std::string> answers;
	int right;

	while (!in.eof()) 
	{
		std::getline(in, text);
		std::string temp;
		for (int i = 0; i < 4; ++i) 
		{
			in >> temp;
			answers.push_back(temp);
		}
		in.ignore();
		in >> right;
		questions.push_back(Question(text, answers, right));
		answers.clear();
	}
	in.close();
}

void Quiz::writeResultToFile()
{
	std::ofstream out("result.txt");
	out << user->getUsername() << ' ' << score << std::endl;
	out.close();
}
