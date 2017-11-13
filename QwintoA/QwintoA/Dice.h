#pragma once
#include <ostream>

struct Dice {
public :
	enum class Colour;
	const Colour c;
	int face;
	int roll();
};

std::ostream& operator<<(std::ostream& os, const Dice& dice);