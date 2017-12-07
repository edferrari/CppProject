#include "Dice.h"
#include "RandomDice.h"
#include <string>

Dice::Dice(Colour color) : c(color) {
	roll();
}

int Dice::roll() {
	face = RandomDice::generate();
	return face;
}

std::ostream& operator<<(std::ostream& os, const Dice& dice) {
	std::string colorString;

	switch (dice.c) {
	case Dice::Colour::RED: colorString = "red"; break;
	case Dice::Colour::YELLOW: colorString = "yellow"; break;
	case Dice::Colour::BLUE: colorString = "blue"; break;
	case Dice::Colour::GREEN: colorString = "green"; break;
	case Dice::Colour::WHITE: colorString = "white"; break;
	}

	os << "The face of the " + colorString + " dice is now " << dice.face << " !" << std::endl;
	return os;
};