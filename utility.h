#ifndef UTILITY_H
#define UTILITY_H
#pragma once
#include "purchased.h"
class Utility :public Purchased {
public:
	Utility(string name, int location,int cost,int rent,int costOfUprgrade, int rent1, int rent2, int rent3, int rent4, int rent5);
	int askPlayer(Player* player[],int playerNum);
	void printInfo(Player* player[], int playerNum);
	void printMortgageInfo(Player* player[], int playerNum);
	int allowUpgrade(Player* player[], int playerNum);
	void setMortgage(Player* player[], int playerNum,int i);
	void unsetMortgage(Player* player[], int playerNum,int i);
	void askForUpgrade(Player* player[], int playerNum);
	void setOwned(Player* player[], int playerNum);
	int getRentWithoutDice(Player* player[], int playerNum);
	int costOfMortage(Player*player[], int playerNum);
	int getRent(Player* player[], int playerNum);
	~Utility();
};
#endif
