#ifndef PLAYER_H 
#define PLAYER_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
class MPlayer
{
private:
	string mNamePlayer;
	int mNumPlayer;
	int mCurrentBalance;
	int mLocation;
public:
	MPlayer(string name, int numPlayer);

	string getName();
	
	int getPlayerNum();

	int getBalance();
	void addBalance(int add);
	void decBalance(int dec);

	int getLocation();
	void setLocation(int loc);

	void RollDice();

	~MPlayer();
};
int Random();
#endif
