#ifndef PUBLICTREASURY_H
#define PUBLICTREASURY_H
#pragma once

#include "field.h"
#include <queue>
//класс Общественная казна
class Treasury :public Field {
public:
	Treasury(string name, int location); //конструктор
	void doTurn(Player* player[], int playerNum, queue<int> &q1, queue<int> &q2, int numOfPlayers); //ход на данном поле
	int getTreasuryCard(std::queue<int> &q); //берём карту Общественная казна

	~Treasury();// деструктор
};
#endif 

