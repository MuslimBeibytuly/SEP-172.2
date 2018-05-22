#include <vector>
#include <cassert>
#include "CharacterFactory.h"
#include "RealFactory.h"
void factory()
{
	std::vector<Character *> characters;
	characters.push_back(
		CharacterFactory::createCharacter(CharacterFactory::healer)
	);
	characters.push_back(
		CharacterFactory::createCharacter(CharacterFactory::warrior)
	);
	characters.push_back(
		CharacterFactory::createCharacter(CharacterFactory::wizard)
	);
	for (Character * character : characters) {
		character->message();
	}
}
void main()
{
	assert(
		RealFactory::client()->state == Client::Anonymous
	);
	assert(
		RealFactory::client_signed_in()->state == Client::Authenticated
	);
	assert(
		RealFactory::client_signed_out()->state == Client::Anonymous
	);
	system("pause");
}