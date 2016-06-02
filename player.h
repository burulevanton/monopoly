#ifndef PLAYER_H 
#define PLAYER_H
#pragma once
#include <iostream>
#include <string>
<<<<<<< HEAD
using namespace std;
=======
#include <vector>
using namespace std;
class Field;
>>>>>>> dev
class Player
{
private:
	string mNamePlayer;
	int mNumPlayer;
	int mCurrentBalance;
<<<<<<< HEAD
	int mLocation;
=======
	bool changeLocation; //смена локации от поля Шанс
	int mLocation;
	int mRoll1;
	int mRoll2;
	bool inGame;
	vector <string> mColourGroupOwned;
	int mRailwayOwned;
	int mUtilityOwned;
	vector <int> mFieldsOwned;
	vector <int> mFieldsMortgage;
>>>>>>> dev
public:
	Player(string name, int numPlayer);

	string getName();
	
	int getPlayerNum();

<<<<<<< HEAD
=======

	void removeColor(string,int);
>>>>>>> dev
	int getBalance();
	void addBalance(int add);
	void decBalance(int dec);

	int getLocation();
	void setLocation(int loc);

<<<<<<< HEAD
	void RollDice();
=======
	void quitGame();
	bool checkQuit();

	void ownField(int);
	int sizeOfVect();
	int getNumOfField(int);

	void mortgageField(int);
	int getSizeOfMortV();
	int getNumOfMortgage(int);

	void setNoMoney(int);
	int getNoMoney();

	vector <string> getOwnedColor();
	void setOwnedColor(string color);
	int getNumOfColor(string color);
	void removeMortgage(int);
	void removeInOwn(int);
	void setOwnedRailway();
	void setMortgageRailway(int);
	int getOwnedRailway();

	void setOwnedUtility();
	void setMortgageUtility(int);
	int getOwnedUtility();

	void RollDice();
	int getRoll();

	bool checkChanges();
	void setChanges(bool change);
>>>>>>> dev

	~Player();
};
int Random();
#endif
