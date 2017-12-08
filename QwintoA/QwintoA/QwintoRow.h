#pragma once
#include "Dice.h"
#include <string>
template <Dice::Colour C>
class QwintoRow {
public:
	QwintoRow();
	Dice::Colour color;
	int[12] data;
	int& operator[](std::size_t idx);
	int& operator[] const(std::size_t idx);
	bool validate(int index, RollOfDice rd);
	friend std::ostream& operator<<(std::ostream& os, const RollOfDice& roll);
private:
	const std::string getColorString(Dice::Colour c);
	const std::string getOffset(Dice::Colour c);
};