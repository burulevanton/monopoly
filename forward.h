#ifndef FORWARD_H
#define FORWARD_H
#pragma once
#include "field.h"
class Forward :public Field {
public:
	Forward(string name);

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);

	~Forward();
};
#endif
