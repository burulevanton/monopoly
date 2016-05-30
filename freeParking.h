#ifndef FREEPARKING_H
#define FREEPARKING_H
#pragma once

#include "field.h"


class FreeParking :public Field
{
public:
	FreeParking(string posName);
	void doTurn(Player * player[], int playerNum, queue<int> &q1, queue<int> &q2);

	~FreeParking();
};

#endif
