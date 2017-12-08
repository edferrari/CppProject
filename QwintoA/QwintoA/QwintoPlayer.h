#ifndef QWINTO_PLAYER_H
#define QWINTO_PLAYER_H

#include "Player.h"
#include "QwintoScoreSheet.h"

class QwintoPlayer : public Player {
	QwintoScoreSheet scoreSheet;
public:
	QwintoPlayer(std::string name);
	virtual std::string inputBeforeRoll(RollOfDice& roll) override;
	virtual std::string inputAfterRoll(RollOfDice& roll) override;
	};
#endif 
