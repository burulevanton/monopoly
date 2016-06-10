#ifndef JAIL_H
#define JAIL_H
#pragma once
#include "field.h"
//класс, отвечающий за поле "“юрьма"
class Jail :public Field {
public:
	Jail(string name, int location);//констурктор

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);//функци€ хода на данном поле

	~Jail();//деструктор
};
#endif