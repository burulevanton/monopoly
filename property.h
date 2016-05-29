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
	string mColourGroup;
public:
	Property(string name, int cost, int rent,string color);
	virtual void doTurn(Player* player[], int playerNum);

	int getCost();
	int getRent();
	int getOwner();
	string getColourGroup();

	~Property();
};
#endif