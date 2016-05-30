#ifndef UTILITY_H
#define UTILITY_H
#pragma once
#include "field.h"
class Utility :public Field {
private:
	int mOwner;
public:
	Utility(string name);

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2);

	~Utility();
};
#endif
