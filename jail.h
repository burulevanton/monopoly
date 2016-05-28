#ifndef JAIL_H
#define JAIL_H
#pragma once
#include "field.h"
class Jail :public Field {
public:
	Jail(string name);

	void doTurn(Player* player[], int playerNum);

	~Jail();
};
#endif