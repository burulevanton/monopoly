#ifndef GOTOJAIL_H
#define GOTOJAIL_H
#pragma once
#include "field.h"
class GoToJail :public Field {
public:
<<<<<<< HEAD
	GoToJail(string name);

	void doTurn(Player* player[], int playerNum);
=======
	GoToJail(string name, int location);

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);
>>>>>>> dev

	~GoToJail();
};
#endif