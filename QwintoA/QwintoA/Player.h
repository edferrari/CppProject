#pragma once
#include "RollOfDice.h"
#include <string>

class Player {
public:
	bool isActive;
	virtual Player() = 0;
	virtual std::string inputBeforeRoll(&RollOfDice roll) = 0;
	virtual std::string inputAfterRoll(&RollOfDice roll) = 0;
}
