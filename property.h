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
	bool isMortgage;
public:
	Property(string name, int cost, int rent,string color);
	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);

	int getCost();
	int getRent();
	int getOwner();
	void unsetOwner();
	bool checkMortgage();
	string getColourGroup();

	void setMortgage();
	void unsetMortgage();

	~Property();
};
#endif