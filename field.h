#ifndef FIELD_H 
#define FIELD_H
#pragma once

#include <iostream>
#include <string>

#include "player.h"
#include <queue>
using namespace std;
//јбстрактный класс ѕоле, представл€ет собой одну €чейку на поле
class Field
{
private:
	string mName; //им€ €чейки
	int mLocation; //позици€
public:
	Field(string name,int location); //конструктор
	virtual void doTurn(Player * player[], int playerNum, queue<int> &q1, queue<int> &q2,int numOfPlayers) = 0;//виртуальна€ функци€ хода на данном поле(у каждого дочернего класса сво€)
	
	string getName(); //получение имени

	int getLocation();//получение локации

	~Field();//деструктор

};
#endif
