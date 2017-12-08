#include "QwintoScoreSheet.h"
#include "ScoreSheet.h"
#include "QwintoRow.h"
#include <string>

QwintoScoreSheet::QwintoScoreSheet(std::string player) {
	playerName = player;
	totalScore = 0;
	failed = 0;

	red = QwintoRow<Dice::Colour::RED>();
	yellow = QwintoRow<Dice::Colour::YELLOW>();
	blue = QwintoRow<Dice::Colour::BLUE>();
}

bool QwintoScoreSheet::operator!() const {
	return ((failed == 4) || (((red[10] != 0) && (yellow[10] != 0)) || ((red[11]) && (yellow[10])) || ((yellow[10]) & (blue[9]))));
}

bool QwintoScoreSheet::score(RollOfDice roll, Dice::Colour color, int position = -1) {
	if (!validate(roll, color, position)) {
		return false;
	}
	else {
		if (color == Dice::Colour::RED) {
			red[position] = roll;
		}
		else if (color == Dice::Colour::YELLOW) {
			yellow[position] = roll;
		}
		else {
			blue[position] = roll;
		}

		return true;
	}
}

int QwintoScoreSheet::setTotal() {
	calcTotal();
	return (totalScore);
}

bool QwintoScoreSheet::validate(RollOfDice roll, Dice::Colour color, int position) {
	bool res = false;
	
	//Check the row where we want to try adding a score.
	if (color == Dice::Colour::RED) {
		//Checks : -> Score increases from left to right. / Cell is not invalid. / Score is different from yellow. / Score is different from blue.
		res = (red[position - 1] < roll) && (red[position] == 0) && (red[position] != -1) && (roll != yellow[position]) && (roll != blue[position]);
	}
	else if (color == Dice::Colour::YELLOW) {
		res = (yellow[position - 1] < roll) && (yellow[position] == 0) && (yellow[position] != -1) && (roll != red[position]) && (roll != blue[position]);
	}
	else {
		res = (blue[position - 1] < roll) && (blue[position] == 0) && (blue[position] != -1) && (roll != red[position]) && (roll != yellow[position]);
	}

	return res;
}

void QwintoScoreSheet::calcTotal() {
	int rTotal = 0;
	int yTotal = 0;
	int bTotal = 0;
	int bonus = 0;
	int total = 0;

	for (int i = 0; i < 12; i++) {
		rTotal += red[i];
		yTotal += yellow[i];
		bTotal += blue[i];
		if ((red[i] > 0) && (yellow[i] > 0) && (blue[i] > 0)) {
			switch (i) {
			case 2: total += blue[i]; break;
			case 3: total += red[i]; break;
			case 7: total += red[i]; break;
			case 8: total += yellow[i]; break;
			case 9: total += blue[i]; break;
			default: break;
			}
		}
	}

	totalScore = total;
}