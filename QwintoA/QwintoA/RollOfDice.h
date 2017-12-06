#pragma once
#include "Dice.h"
#include <iterator>
#include <vector>

struct RollOfDice {
public:
	//Constructors
	RollOfDice();

	//Member methods
	void roll();
	void addDice(Dice d);
	RollOfDice pair(Dice d1, Dice d2);

	//Iterator related methods, for compatibility with for loops.
	auto begin() const;
	auto end() const;
	auto cbegin() const;
	auto cend() const;

	//Operators
	operator int() const;
	friend std::ostream& operator<<(std::ostream& os, const RollOfDice& roll);

private:
	std::vector<Dice> dices;
};