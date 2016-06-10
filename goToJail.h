#ifndef GOTOJAIL_H
#define GOTOJAIL_H
#pragma once
#include "field.h"
//класс, отвечающий за поле "ќтправл€йс€ в тюрьму"
class GoToJail :public Field {
public:
	GoToJail(string name, int location); //конструктор

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);//процедура хода на этом поле

	~GoToJail();//деструктор
};
#endif