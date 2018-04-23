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
}


Presentation::~Presentation()
{
}
