#include "CharacterFactory.h"



CharacterFactory::CharacterFactory()
{
}


CharacterFactory::~CharacterFactory()
{
}

Character * CharacterFactory::createCharacter(Choice choice)
{
	Character * character = nullptr;
	switch (choice) 
	{
	case warrior:
		character = new Warrior();
		break;
	case wizard:
		character = new Wizard();
		break;
	case healer:
		character = new Healer();
		break;
	default:
		assert(false);
	}
	return character;
}
