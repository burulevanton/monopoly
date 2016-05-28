#ifndef FIELD_H 
#define FIELD_H
#pragma once

#include <iostream>
#include <string>

#include "player.h"

using namespace std;

class Field
{
private:
	string mName;
public:
	Field(string name);
	virtual void doTurn(Player * player[], int playerNum) = 0;
	
	string getName();

	~Field();

};
#endif
