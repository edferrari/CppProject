#pragma once
#include "RandomDice.h"

std::random_device RandomDice::random;
std::mt19937 RandomDice::generator(random());
std::uniform_int_distribution<> RandomDice::distribution(1, 6);

int RandomDice::generate() {
	return distribution(generator);
}