#pragma once

class RandomDice {
public :
	static std::random_device rd;   //Used to obtain a seed for the Mersenne-Twister generator.
	static std::mt19937 gen;  //Standard mersenne_twister_engine seeded using rd().
	static std::uniform_int_distribution<> dis;
};