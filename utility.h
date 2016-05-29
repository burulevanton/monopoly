#ifndef UTILITY_H
#define UTILITY_H
#pragma once
#include "field.h"
class Utility :public Field {
private:
	int mOwner;
public:
	Utility(string name);

	void doTurn(Player* player[], int playerNum);

	~Utility();
};
#endif
