#pragma once
#include <iostream>

struct Dice {
public :
	enum class Colour { RED, YELLOW, BLUE, GREEN, WHITE };
	Dice(Colour color);
	const Colour c;
	int face;
	int roll();
	friend std::ostream& operator<<(std::ostream& os, const Dice& dice);
};