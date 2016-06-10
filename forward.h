#ifndef FORWARD_H
#define FORWARD_H
#pragma once
#include "field.h"
//класс, отвечающий за поле "Вперёд"
class Forward :public Field {
public:
	Forward(string name,int location);//деструктор

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);//процедура хода на данном поле

	~Forward();//констуктор
};
#endif
