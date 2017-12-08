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

	bool virtual score(RollOfDice roll, Dice::Colour color, int position = -1);
	int virtual setTotal();

	bool virtual operator!() const;
	friend virtual std::ostream& operator<<(std::ostream& os, const ScoreSheet& scoresheet);
protected:
	bool virtual validate(RollOfDice roll, Dice::Colour color, int position = -1);
	void virtual calcTotal();
};