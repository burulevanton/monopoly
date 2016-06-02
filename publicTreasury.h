#ifndef PUBLICTREASURY_H
#define PUBLICTREASURY_H
#pragma once

#include "field.h"
<<<<<<< HEAD

class Treasury :public Field {
public:
	Treasury(string name);
	virtual void doTurn(Player* player[], int playerNum);
=======
#include <queue>
class Treasury :public Field {
public:
	Treasury(string name, int location);
	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);
	int getTreasuryCard(std::queue<int> &q);
>>>>>>> dev

	~Treasury();
};
#endif 

