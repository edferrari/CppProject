#pragma once
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