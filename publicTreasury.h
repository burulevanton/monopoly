#ifndef PUBLICTREASURY_H
#define PUBLICTREASURY_H
#pragma once

#include "field.h"
#include <queue>
class Treasury :public Field {
public:
	Treasury(string name);
	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);
	int getTreasuryCard(std::queue<int> &q);

	~Treasury();
};
#endif 

