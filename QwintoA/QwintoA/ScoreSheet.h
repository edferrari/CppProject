#pragma once
#include <string>
#include "Dice.h"
#include "RollOfDice.h"

class ScoreSheet {
public:
	std::string playerName;
	int failed;
	int score;

	bool virtual score(RollOfDice roll, Dice::Colour color, int position = -1) = 0;
	int virtual setTotal() = 0;

	bool virtual operator!() const = 0;
	friend virtual std::ostream& operator<<(std::ostream& os, const ScoreSheet& scoresheet) = 0;
protected:
	bool virtual validate(RollOfDice roll, Dice::Colour color, int position = -1) = 0;
	void virtual calcTotal() = 0;
};