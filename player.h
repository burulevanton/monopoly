#ifndef PLAYER_H 
#define PLAYER_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Player
{
private:
	string mNamePlayer;
	int mNumPlayer;
	int mCurrentBalance;
	int mLocation;
	int mRoll1;
	int mRoll2;
	vector <string> mColourGroupOwned;
	vector <string> mRailwayOwned;
	vector <string> mUtilityOwned;
public:
	Player(string name, int numPlayer);

	string getName();
	
	int getPlayerNum();

	int getBalance();
	void addBalance(int add);
	void decBalance(int dec);

	int getLocation();
	void setLocation(int loc);

	bool getOwned(string color);
	void setOwned(string color);

	void setOwnedRailway(string railway);
	int getOwnedRailway();

	void setOwnedUtility(string utility);
	int getOwnedUtility();

	void RollDice();
	int getRoll();

	~Player();
};
int Random();
#endif
