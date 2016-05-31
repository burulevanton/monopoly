#ifndef FIELD_H 
#define FIELD_H
#pragma once

#include <iostream>
#include <string>

#include "player.h"
#include <queue>
using namespace std;

class Field
{
private:
	string mName;
public:
	Field(string name);
	virtual void doTurn(Player * player[], int playerNum, queue<int> &q1, queue<int> &q2,int numOfPlayers) = 0;
	
	string getName();

	~Field();

};
#endif
