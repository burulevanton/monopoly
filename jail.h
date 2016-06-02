#ifndef JAIL_H
#define JAIL_H
#pragma once
#include "field.h"
class Jail :public Field {
public:
<<<<<<< HEAD
	Jail(string name);

	void doTurn(Player* player[], int playerNum);
=======
	Jail(string name, int location);

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);
>>>>>>> dev

	~Jail();
};
#endif