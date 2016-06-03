#ifndef TAX_H
#define TAX_H
#pragma once
#include "field.h"
class Tax :public Field {
private:
	int mCost;
public:
	Tax(string name, int location,int cost);

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);

	~Tax();
};
#endif
