#ifndef TAX_H
#define TAX_H
#pragma once
#include "field.h"
//поле Налог
class Tax :public Field {
private:
	int mCost; //налоговая плата
public:
	Tax(string name, int location,int cost); //конструктор

	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers); //ход игрока

	~Tax(); //деструктор
};
#endif
