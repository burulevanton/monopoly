#ifndef PROPERTY_H
#define PROPERTY_H
#pragma once

#include <string>

#include "player.h"
#include "field.h"

class Property : public Field
{
private:
	int mCost;
	int mRent;
	int mOwner;
public:
	Property(string name, int cost, int rent);
	virtual void doTurn(Player* player[], int playerNum);

	int getCost();
	int getRent();
	int getOwner();

	~Property();
};
#endif