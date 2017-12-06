#include "QwintoRow.h"

template <Dice::Colour C>
QwintoRow<C>::QwintoRow() {
	color = C;
	data = {0,0,0,0,0,0,0,0,0,0,0,0};
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
std::ostream& operator<<(std::ostream& os, const QwintoRow<C>& row) {
	//TODO implement this
}