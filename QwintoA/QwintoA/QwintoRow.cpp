#include "QwintoRow.h"
#include <string>

template <Dice::Colour C>
QwintoRow<C>::QwintoRow() {
	color = C;

	//We mark the invalid fields with the special value -1
	if (C == Dice::Colour::RED) {
		data = { 0,0,0,0,0,-1,0,0,0,0,0,0 };
	}
	else if (C == Dice::Colour::YELLOW) {
		data = { 0,0,0,0,0,0,-1,0,0,0,0,0 };
	}
	else {
		data = { 0,0,0,0,-1,0,0,0,0,0,0,0 };
	}
}

template <Dice::Colour C>
int& QwintoRow<C>::operator[](std::size_t idx) {
	return data[idx];
}

template<Dice::Colour C>
bool QwintoRow<C>::validate(std::size_t index, RollOfDice rd) {
	return (rd > data[index-1]);
}

template<Dice::Colour C>
const std::string QwintoRow<C>::getColorString(Dice::Colour color) {
	switch (color) {
		case Dice::Colour::RED: return "Red";
		case Dice::Colour::YELLOW: return "Yellow";
		case Dice::Colour::BLUE: return "Blue";
		case Dice::Colour::GREEN: return "Green";
		case Dice::Colour::WHITE: return "White";
		default: return "";
	}
}

template<Dice::Colour C>
const std::string QwintoRow<C>::getOffset(Dice::Colour color) {
	switch (color) {
		case Dice::Colour::RED: return "          ";
		case Dice::Colour::YELLOW: return "    ";
		case Dice::Colour::BLUE: return "   ";
		default: return "";
	}
}

template<Dice::Colour C>
std::ostream& operator<<(std::ostream& os, const QwintoRow<C>& row) {
	int index = 0;
	int failed = 0;
	
	os << row.getColorString(row.color) << row.getOffset(row.color);

	for (int i : data) {
		//Detects when the iterator is in the valid range of values for the given row and color.
		if ((row.color == Dice::Colour::RED && index >= 2) || (row.color == Dice::Colour::YELLOW && index >= 2 && index < 11) || (row.color == Dice::Colour::BLUE && index < 10)) {
			//Detects when the iterator is pointing to a bonus cell or the cell just after.
			if ((row.color == Dice::Colour::RED && (index == 3 || index = 4 || index == 7 || index == 8)) ||
				(row.color == Dice::Colour::YELLOW && (index == 8 || index == 9)) ||
				(row.color == Dice::Colour::BLUE && (index == 2 || index == 3))) {
				os << "%";
			} else {
				os << "|";
			}

			//Detects when the score is below 10 to add a padding zero.
			if (i < 10) {
				//Detects when there is a failed throw denoted by the value -1.
				if (i == -1) {
					os << "XX";
				}
				//Detects when the cell should be left empty.
				else if (i == 0) {
					os << "  ";
				}
				//Normal case where we add a 0
				else {
					os << "0" << i;
				}
			} else {
				os << i;
			}
		}
		index++;
	}
	os << "|";

	return os;
}