#include"QwixxScoreSheet.h"

ostream &operator<<(ostream &os, QwixxScoreSheet &item) {
	os <<

		"Player name:"
		"        ------------------------------------"
		"Red     | 2| 3| 4| 5| 6| 7| 8| 9|10|11|12| U"
		"        ------------------------------------"
		"Yellow  | 2| 3| 4| 5| 6| 7| 8| 9|10|11|12| U"
		"        ------------------------------------"
		"Green   |12|11|10| 9| 8| 7| 6| 5| 4| 3| 2| U"
		"        ------------------------------------"
		"Blue    |12|11|10| 9| 8| 7| 6| 5| 4| 3| 2| U"
		"        ------------------------------------"
		"Failed throws:";

}
