#ifndef FREEPARKING_H
#define FREEPARKING_H
#pragma once

#include "field.h"


class FreeParking :public Field
{
public:
<<<<<<< HEAD
	FreeParking(string posName);
	virtual void doTurn(Player * player[], int playerNum);
=======
	FreeParking(string posName, int location);
	void doTurn(Player * player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);
>>>>>>> dev

	~FreeParking();
};

#endif
