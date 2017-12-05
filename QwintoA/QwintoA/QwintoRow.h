#pragma once
#include "Dice.h"
template <Dice::Colour C>
class QwintoRow {
public:
	QwintoRow();
	Dice::Colour color;
	int[] data;
	int& operator[](std::size_t idx);
	bool validate(int index, RollOfDice rd);
	friend std::ostream& operator<<(std::ostream& os, const RollOfDice& roll);
};