#include

struct Dice {
	const Colour c;
};

int roll() {
	std::default_random_engine e;
	for (rolls i = 1; i <= 6; i++){
		e.min();
		e.max();
	}

	int face = rand(6);
	return face;
}