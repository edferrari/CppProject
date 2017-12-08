#ifndef QWINTO_PLAYER_H
#define QWINTO_PLAYER_H

#include "Player.h"
#include "QwixxScoreSheet.h"

class QwixxPlayer : public Player {
	QwixxScoreSheet scoreSheet;
public:
	QwixxPlayer(std::string name);
	virtual std::string inputBeforeRoll(RollOfDice& roll) override;
	virtual std::string inputAfterRoll(RollOfDice& roll) override;
};
#endif 