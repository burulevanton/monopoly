#ifndef RAILWAY_H
#define RAILWAY_H
#pragma once
#include "field.h"
class Railway :public Field {
private:
	int mOwner;
public:
	Railway(string name);
	virtual void doTurn(Player* player[], int playerNum);

	int getOwner();

	~Railway();
};
#endif