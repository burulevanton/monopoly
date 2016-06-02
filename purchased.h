#ifndef PURCHASED_H
#define PURCHASED_H
#pragma once
#include "field.h"
class Purchased :public Field {
protected:
	int mCost;
	int mRent[6];
	int mOwner;
	bool isMortgage;
	int mCostOfUpgrade;
	int numOfUpgrades;
	int numOfTurns;
public:
	Purchased(string name, int location, int cost, int rent, int costOfUpgrade, int rent1, int rent2, int rent3, int rent4, int rent5);
	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);
	virtual void printInfo(Player* player[], int playerNum) = 0;
	virtual void printMortgageInfo(Player* player[], int playerNum) = 0;
	virtual int askPlayer(Player* player[], int playerNum) = 0;
	virtual int allowUpgrade(Player* player[], int playerNum) = 0;
	virtual void askForUpgrade(Player* player[], int playerNum) = 0;
	virtual void setOwned(Player* player[], int playerNum) = 0;
	virtual int getRent(Player* player[], int playerNum) = 0;
	virtual int costOfMortage(Player*player[], int playerNum) = 0;
	int getCost();
	int getRent();
	int getOwner();
	void setUpgrade(Player*player[],int playerNum);
	void unsetOwner(Player* player[],int playerNum,int i);
	bool checkMortgage();
	virtual void setMortgage(Player* player[], int playerNum, int i)=0;
	virtual void unsetMortgage(Player* player[], int playerNum, int i)=0;
	void printUnMortgageInfo(Player* player[],int playerNum);
	bool upTurns();
	int getTurns();

	~Purchased();
};
#endif
