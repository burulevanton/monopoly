#ifndef CHANCE_H
#define CHANCE_H
#pragma once
//класс Шанс, наследуется от класса Поле, отвечает за поля "Шанс"
#include "field.h"
#include <queue>
class Chance : public Field { 
public:
	Chance(string name,int location);//конструктор
	void doTurn(Player *player[], int playerNum, std::queue<int> &q1,queue<int> &q2,int numOfPlayers);//определение процедуры, являющейся виртуальной в родительском классе
	int getChanceCard(std::queue<int> &q);//берём карту Шанса
	~Chance();//деструктор
};
#endif