#ifndef GOTOJAIL_H
#define GOTOJAIL_H
#pragma once
#include "field.h"
class GoToJail :public Field {
public:
	GoToJail(string name);

	void doTurn(Player* player[], int playerNum);

	~GoToJail();
};
#endif