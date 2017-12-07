#pragma once
<<<<<<< HEAD
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
=======
#ifndef SCORESHEET_H_
#define SCORESHEET_H_

//#include <array>
#include <string>

class ScoreSheet {
	std::string playerName;
	int failedAttempts;
	int overallScore;
public:
	ScoreSheet(std::string name);
	bool ScoreSheet::score(RollOfDice& dice, Dice::Colour colour, int position);
	void ScoreSheet::setTotal();
	};

#endif
>>>>>>> 6e29728cd76f979034561b447037846d80d841d0
