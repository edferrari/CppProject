#include "QwintoScoreSheet.h"

QwintoScoreSheet::QwintoScoreSheet(std::string name) : ScoreSheet(name) {

}

ostream &operator<<(ostream &os, QwintoScoreSheet &item) {
	os <<

		"Player name:"
		"               -------------------------------"
		"Red            |  %  %  |XX|  %  %  |  |  |  |"
		"           -----------------------------------"
		"Yellow     |  |  |  |  |  |XX|  %  %  |  |"
		"        ----------------------------------"
		"Blue    |  |  %  %  |XX|  |  |  |  %  %"
		"        -------------------------------"
		"Failed throws:";

}
