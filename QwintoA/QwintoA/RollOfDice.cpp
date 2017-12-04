#include "RollOfDice.h"
#include <vector>

RollOfDice::RollOfDice() {
	std::vector<Dice> dices = std::vector<Dice>();
}

void RollOfDice::roll() {
	for (Dice d : dices) {
		d.roll();
	}
}

void RollOfDice::addDice(Dice d) {
	dices.push_back(d);
}

RollOfDice RollOfDice::pair(Dice d1, Dice d2) {
	RollOfDice res = RollOfDice();
	res.addDice(d1);
	res.addDice(d2);
	return res;
}

auto RollOfDice::begin() const {
	return dices.begin();
}

auto RollOfDice::end() const {
	return dices.end();
}

auto RollOfDice::cbegin() const {
	return dices.cbegin();
}

auto RollOfDice::cend() const {
	return dices.cend();
}

RollOfDice::operator int() const {
	int sum = 0;
	for (Dice d : dices) {
		sum += d.face;
	}

	return sum;
}

std::ostream& operator<<(std::ostream& os, const RollOfDice& roll) {
	for (Dice d : roll) {
		os << d;
	}

	return os;
}