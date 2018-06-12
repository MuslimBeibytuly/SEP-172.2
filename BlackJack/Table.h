#pragma once
#include <array>
#include <unordered_map>
#include "Customer.h"
#include "AI.h"
#include "Admin.h"
#include "Card.h"
class Table
{
	Table();
	Table(const Table &) = delete;
	Table & operator=(const Table &) = delete;
	std::array<Card, 9> cards;
	std::vector<Player *> players;
	std::unordered_map<Player *, size_t> score;
	Admin admin;
public:
	void init();
	void play();
	static Table & getInstance();
	~Table();
};

