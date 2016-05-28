#ifndef CHANCE_H
#define CHANCE_H
#pragma once

#include "field.h"
class Chance : public Field {
public:
	Chance(string name);
	virtual void doTurn(Player *player[], int playerNum);

	~Chance();
};
#endif