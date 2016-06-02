#ifndef RAILWAY_H
#define RAILWAY_H
#pragma once
<<<<<<< HEAD
#include "field.h"
class Railway :public Field {
private:
	int mOwner;
public:
	Railway(string name);
	virtual void doTurn(Player* player[], int playerNum);

	int getOwner();

=======
#include "purchased.h"
class Railway :public Purchased {
public:
	Railway(string name, int location, int cost, int rent, int costOfHouse, int rent1, int rent2, int rent3, int rent4, int rent5);
	void printInfo(Player* player[], int playerNum);
	void printMortgageInfo(Player* player[], int playerNum);
	int costOfMortage(Player*player[], int playerNum);
	int askPlayer(Player* player[], int playerNum);
	void askForUpgrade(Player* player[],int playerNum);
	int allowUpgrade(Player* player[], int playerNum);
	void setMortgage(Player* player[], int playerNum,int i);
	void unsetMortgage(Player* player[], int playerNum,int i);
	void setOwned(Player* player[], int playerNum);
	int getRent(Player* player[], int playerNum);
>>>>>>> dev
	~Railway();
};
#endif