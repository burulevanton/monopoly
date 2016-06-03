#ifndef CHANCE_H
#define CHANCE_H
#pragma once

#include "field.h"
#include <queue>
class Chance : public Field {
public:
	Chance(string name,int location);
	void doTurn(Player *player[], int playerNum, std::queue<int> &q1,queue<int> &q2,int numOfPlayers);
	int getChanceCard(std::queue<int> &q);
	~Chance();
};
#endif