#ifndef FIELD_H 
#define FIELD_H
#pragma once

#include <iostream>
#include <string>

#include "player.h"
<<<<<<< HEAD

=======
#include <queue>
>>>>>>> dev
using namespace std;

class Field
{
private:
	string mName;
<<<<<<< HEAD
public:
	Field(string name);
	virtual void doTurn(Player * player[], int playerNum) = 0;
	
	string getName();

=======
	int mLocation;
public:
	Field(string name,int location);
	virtual void doTurn(Player * player[], int playerNum, queue<int> &q1, queue<int> &q2,int numOfPlayers) = 0;
	
	string getName();

	int getLocation();

>>>>>>> dev
	~Field();

};
#endif
