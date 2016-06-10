#ifndef FREEPARKING_H
#define FREEPARKING_H
#pragma once

#include "field.h"

//класс, отвечающий за поле "Ѕесплатна€ сто€нка"
class FreeParking :public Field
{
public:
	FreeParking(string posName, int location);//конструктор
	void doTurn(Player * player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers);//процедура хода дл€ этого пол€

	~FreeParking();//деструктор
};

#endif
