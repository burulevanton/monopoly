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
	bool cantBuy;
	//bool needUpgrade;
	int noMoney;
	vector <string> mColourGroupOwned;
	int mRailwayOwned;
	int mUtilityOwned;
	vector <int> mFieldsOwned;
	vector <int> mFieldsMortgage;
	//vector <Field*> mOwnedProperties;
	//vector <Field*> mMortgageProperties;
public:
	Player(string name, int numPlayer);

	string getName();
	
	int getPlayerNum();

	void setCantBuy(bool);
	bool getCantBuy();

	//void setUpgrade(bool);
	//bool getUpgrade();
	void removeColor(string,int);
	int getBalance();
	void addBalance(int add);
	void decBalance(int dec);

	bool getSpendMoney();
	void setSpendMoney(bool);

	int getLocation();
	void setLocation(int loc);

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

	//void setOwnedProperty(Field*);

	//void setMortgage(Field*);
	void removeMortgage(int);
	void removeInOwn(int);

	//int getPropertiesAmount();

	//int getMortgageAmount();

	//Field* getMortgages(int);

	//Field* getProperties(int);

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

	~Player();
};
int Random();
#endif
