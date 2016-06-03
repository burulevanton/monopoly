#ifndef PROPERTY_H
#define PROPERTY_H
#pragma once

#include <string>

#include "player.h"
#include "purchased.h"

class Property : public Purchased
{
private:
	string mColourGroup;
public:
	Property(string name, int location, int cost, int rent,int costOfUpgrade,int rent1,int rent2,int rent3,int rent4,int rent5,string color);
	void printInfo(Player* player[], int playerNum);
	int askPlayer(Player* player[], int playerNum);
	void askForUpgrade(Player* player[], int playerNum);
	string getColourGroup();
	int costOfMortage(Player*player[], int playerNum);
	void printMortgageInfo(Player* player[], int playerNum);
	int allowUpgrade(Player* player[], int playerNum);
	void setMortgage(Player* player[],int playerNum,int i);
	void unsetMortgage(Player* player[],int playerNum,int i);
	void setOwned(Player* player[], int playerNum);
	int getRent(Player* player[], int playerNum);
	int rentWithoutUpgrades(Player* player[], int playerNum);
	~Property();
};
#endif