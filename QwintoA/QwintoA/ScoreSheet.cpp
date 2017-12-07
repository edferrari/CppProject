#include "ScoreSheet.h"
#include "RollOfDice.h"

ScoreSheet::ScoreSheet(std::string name) : playerName(name), failedAttempts(0), overallScore(0) {}

bool ScoreSheet::score(RollOfDice& roll, Dice::Colour colour, int position) {

}

void ScoreSheet::setTotal() {

}

/*ostream &operator<<(ostream &os, ScoreSheet &item) {
	os <<

}*/
