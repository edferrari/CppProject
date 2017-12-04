#pragma once
#include "Dice.h"
template <Dice::Colour::c>
class QwintoRow {
public:
	QwintoRow();
	Dice::Colour color = c;
	int[] data;
	int& operator[](std::size_t idx);
	int& operator[] const(std::size_t idx);
};