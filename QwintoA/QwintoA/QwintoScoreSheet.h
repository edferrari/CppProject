#pragma once
#include "ScoreSheet.h"
#include "QwintoRow.h"
#include <string>

class QwintoScoreSheet : ScoreSheet {
public:
	std::string playerName;
	int totalScore;
	int failed;

	QwintoRow<Dice::Colour::RED> red;
	QwintoRow<Dice::Colour::YELLOW> yellow;
	QwintoRow<Dice::Colour::BLUE> blue;

	QwintoScoreSheet(std::string player);

	bool virtual score(RollOfDice roll, Dice::Colour color, int position = -1) = 0;
	int virtual setTotal() = 0;

	bool virtual operator!() const = 0;
	friend virtual std::ostream& operator<<(std::ostream& os, const ScoreSheet& scoresheet) = 0;
protected:
	bool virtual validate(RollOfDice roll, Dice::Colour color, int position = -1) = 0;
	void virtual calcTotal() = 0;
};