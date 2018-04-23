#include "Presentation.h"



Presentation::Presentation()
{
}

void Presentation::hello()
{
	std::cout << "hello" << std::endl;
}

void Presentation::createUser()
{
	std::cout << "let's create a user: " << std::endl;
	std::string username;
	std::cin >> username;
	Quiz::getInstance().user = new User(username);
}

void Presentation::passQuiz()
{
	Quiz::getInstance().initQuestions();

	for (Question question : Quiz::getInstance().questions)
	{
		std::cout << "question: " << question.getText() << std::endl;
		for (std::string answer : question.getAnswers())
		{
			std::cout << answer << std::endl;
		}
		int choice;
		std::cin >> choice;
		if (choice == question.getRight())
		{
			++Quiz::getInstance().score;
		}
	}
}

void Presentation::showResult()
{
	std::cout << "you've got: " << Quiz::getInstance().score << std::endl;
	Quiz::getInstance().writeResultToFile();
}


Presentation::~Presentation()
{
}
