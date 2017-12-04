#pragma once
#include <random>

struct RandomDice {
public :
	static std::random_device random;   //Used to obtain a seed for the Mersenne-Twister generator.
	static std::mt19937 generator;  //Standard mersenne_twister_engine seeded using rd().
	static std::uniform_int_distribution<int> distribution;
	static int generate();
};