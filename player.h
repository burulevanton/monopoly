#ifndef PLAYER_H 
#define PLAYER_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Field;
class Player
{
private:
	string mNamePlayer;
	int mNumPlayer;
	int mCurrentBalance;
	bool changeLocation; //смена локации от поля Шанс
	int mLocation;
	int mRoll1;
	int mRoll2;
	bool inGame;
	bool spendMoney;
	vector <string> mColourGroupOwned;
	vector <string> mRailwayOwned;
	vector <string> mUtilityOwned;
	vector <Field*> mOwnedProperties;
	vector <Field*> mMortgageProperties;
public:
	Player(string name, int numPlayer);

	string getName();
	
	int getPlayerNum();

	int getBalance();
	void addBalance(int add);
	void decBalance(int dec);
	bool getSpendMoney();
	void setSpendMoney(bool);
	int getLocation();
	void setLocation(int loc);
	void quitGame();
	bool checkQuit();
	bool getOwnedColor(string color);
	void setOwnedColor(string color);
	void setOwnedProperty(Field*);
	void setMortgage(Field*);
	void removeMortgage();
	int getPropertiesAmount();
	int getMortgageAmount();
	Field* getMortgages(int);
	Field* getProperties(int);
	void setOwnedRailway(string railway);
	int getOwnedRailway();

	void setOwnedUtility(string utility);
	int getOwnedUtility();

	void RollDice();
	int getRoll();

	bool checkChanges();
	void setChanges(bool change);

	~Player();
};
int Random();
#endif
