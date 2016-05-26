#ifndef FREEPARKING_H
#define FREEPARKING_H
#pragma once

#include "field.h"


class FreeParking :public Field
{
public:
	FreeParking(string posName);
	virtual void doTurn(Player * player[], int playerNum);

	~FreeParking();
};

#endif
