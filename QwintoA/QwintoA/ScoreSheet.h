#pragma once
#include <string>
#include "Dice.h"
#include "RollOfDice.h"

class Scoresheet {
public:
	virtual Scoresheet() = 0;
	std::string playerName;
	int failed;
	int score;

	bool virtual score(RollOfDice roll, Dice::Colour color, int position = -1);
	int virtual setTotal();

	friend virtual std::ostream& operator<<(std::ostream& os, const Scoresheet& scoresheet);
protected:
	bool virtual validate(RollOfDice roll, Dice::Colour color, int position = -1) = 0;
	void virtual calcTotal() = 0;
}
