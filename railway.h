#ifndef RAILWAY_H
#define RAILWAY_H
#pragma once
#include "field.h"
class Railway :public Field {
private:
	int mOwner;
public:
	Railway(string name);
	virtual void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2);

	int getOwner();

	~Railway();
};
#endif